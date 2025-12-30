#include<stdio.h>
#include<errno.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char buffer[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int iRet=0;

    fd=open("Demo.txt",O_WRONLY);

    if(fd<0)
    {
        printf("Unable to open File \n");
        printf("Reason : %s",strerror(errno));
        return -1;
    }

    printf("File Succesfully open with Fd : %d \n",fd);

    iRet=write(fd,buffer,10);

    printf("%d bytes sets succesfully written\n",iRet);

    close(fd);

    return 0;

}