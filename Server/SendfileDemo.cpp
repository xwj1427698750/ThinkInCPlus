/* #include <sys/sendfile.h>
 * ssize_t sendfile(int out_fd, int in_fd, off_t *offset, size_t count);
 */
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <assert.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/sendfile.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	if (argc <= 3)
	{
		printf("usage: %s ip_address port_number filename\n", basename(argv[0]));
		return 1;
	}
	const char *ip = argv[1];
	int port = atoi(argv[2]);
	const char *filename = argv[3];

	int filefd = open(filename, O_RDONLY);
	assert(filefd > 0);
	struct stat stat_buf;
	fstat(filefd, &stat_buf);

	struct sockaddr_in serv_addr;
	bzero(&serv_addr, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	inet_pton(AF_INET, ip, &serv_addr.sin_addr);
	serv_addr.sin_port = htons(port);

	int sockfd = socket(PF_INET, SOCK_STREAM, 0);
	assert(sockfd >= 0);

	int ret = bind(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr));
	assert(ret != -1);

	ret = listen(sockfd, 5);
	assert(ret != -1);

	struct sockaddr_in cli_addr;
	socklen_t cli_addrlen = sizeof(cli_addr);
	int connfd = accept(sockfd, (struct sockaddr*)&cli_addr, &cli_addrlen);
	if (connfd < 0)
	{
		printf("errno is %d\n", errno);
	}
	else
	{
		sendfile(connfd, filefd, NULL, stat_buf.st_size);
		close(connfd);
	}
	close(sockfd);
	return 0;
}
