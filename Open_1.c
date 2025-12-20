#include<fcntl.h>
#include<stdio.h>

int main()
{
    int fd = 0;

    fd = open("first.c",O_RDWR);

    if(fd==-1)
    {
        printf("Unable to Open File\n");
    }
    else
    {
        printf("File gets successful open with fd : %d\n",fd);
    }

    return 0;
}