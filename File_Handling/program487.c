#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
int main(int argc, char **argv)
{
    int fdRead  = 0,fdWrite = 0;
    char FileName[30];
    char Buffer[1024] = {'\0'};//change
    int iRet = 0;
    printf("Enter the existing file name that you want to open : \n");
    scanf("%s",FileName);

    fdRead = open(FileName,O_RDWR);
    if(fdRead == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }
    printf("Enter the new file name that u want to create : \n");
    scanf("%s",FileName);

    fdWrite = creat(FileName,0777);
    if(fdWrite == -1)
    {
        printf("Unable to create file\n");
        return 0;
    }

    while((iRet  = read(fdRead,Buffer,sizeof(Buffer)))!= 0)
    {
        write(fdWrite,Buffer,iRet);
        memset(Buffer,0,sizeof(Buffer));//it empties the buffer parameters 
    }
    close(fdRead);
    close(fdWrite);
    
    return 0;

}

