/* accept只是从listen队列中取出连接，而不管客户端的状态是断开，还是连接 */
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <assert.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    if (argc <= 2)
    {
        printf("usage: %s ip_address port_number\n", basename(argv[0]));
        return 1;
    }
    const char *ip = argv[1];
    int port = atoi(argv[2]);

    struct sockaddr_in server_addr;
    bzero(&server_addr, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    /* bind error 97, addr family not surport by &server_addr */
    inet_pton(AF_INET, ip, &server_addr.sin_addr); 
    server_addr.sin_port = htons(port);

    int sockfd = socket(PF_INET, SOCK_STREAM, 0);
    assert(sockfd >= 0);

    int ret = bind(sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr));
    assert(ret != -1);

    ret = listen(sockfd, 5);
    assert(ret != -1);
    /* sleep 20s for client connect and disconnect */
    sleep(20);
    struct sockaddr_in client_addr;
    socklen_t client_addrlength = sizeof(client_addr);
    int connfd = accept(sockfd, (struct sockaddr *)&client_addr, &client_addrlength);
    if (connfd < 0)
    {
        printf("errno is %d\n", errno);
    }
    else
    {
        char remote[INET_ADDRSTRLEN];
        printf("connected with ip: %s and port %d\n", inet_ntop(AF_INET, &client_addr.sin_addr,
            remote, INET_ADDRSTRLEN), ntohs(client_addr.sin_port));
        close(connfd);
    }
    close(sockfd);
    return 0;
}

