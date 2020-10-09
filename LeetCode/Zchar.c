#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *convert(char *s, int numRows)
{
    int len = strlen(s);
    char *buf = (char *)malloc(len+1);
    int unit = 2 * (numRows - 1);
    int n = 1; // n * unit >= len
    int index = 0;

    while ((n * unit) <= len)
    {
        n++;
    }

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int base = j * unit;
            int offset = 0;
            if (i == 0)
            {
                offset = base;
                if (offset < len)
                {
                    buf[index++] = *(s + offset);
                }
            }
            else if (i == (numRows - 1))
            {
                offset = base + i;
                if (offset < len)
                {
                    buf[index++] = *(s + offset);
                }
            }
            else
            {
                offset = base + i;
                if (offset < len)
                {
                    buf[index++] = *(s + offset);
                }
                offset = base + unit - i;
                if (offset < len)
                {
                    buf[index++] = *(s + offset);
                }
            }
        }
    }
    buf[len] = '\0';
    printf("%s\n", buf);

    return buf;
}

int main(int argc, char *argv[])
{
    char *default_str = "LEETCODEISHIRING";
    char *str = default_str;
    int numRows = 4;
    if (argc < 3) // ./Zchar str num
    {
        if (argc == 2) // ./Zchar num
        {
            numRows = atoi(argv[1]);
        }
    }
    else
    {
        str = argv[1];
        numRows = atoi(argv[2]);
    }
    convert(str, numRows);
    
    return 0;
}
