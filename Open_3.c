#include<fcntl.h>
#include<stdio.h>

int main()
{
    int fd = 0;

    fd = open("Second.c",O_CREAT,0777);

    if(fd==-1)
    {
        printf("Unable to Create File\n");
    }
    else
    {
        printf("File gets successful Created with fd : %d\n",fd);
    }

    return 0;
}