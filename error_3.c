#include<stdio.h>
#include<errno.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0;
    fd = open("MArvelous.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Error Statement : %s \n", strerror(errno));
    }
    else
    {
        printf("File gets succesfully open : %d \n",fd);
    }
    return 0;
    
}