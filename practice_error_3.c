#include<stdio.h>
#include<errno.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0;
    
    fd = open("Marvelous.txt",O_RDONLY );

    printf("Error Stateent : %s\n",strerror(errno));

    printf("Value of fd : %d\n",fd) ;

    printf("Value of errno : %d\n",errno);
}