#include<stdio.h>
#include<errno.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    fd = open("MArvelous.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File : %d \n", errno);
    }
    else
    {
        printf("File gets succesfully open : %d \n",fd);
    }
    printf("errno : %d \n",errno);
    return 0;
}