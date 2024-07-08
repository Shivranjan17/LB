#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
int main(int argc, char **argv)
{
    int fd = 0;
    char FileName[30];
    char Arr[100];
    int iRet = 0;
    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    printf("Enter the data youm want to write : \n");
    scanf(" %[^'\n']s", Arr);
    iRet = write(fd,Arr,strlen(Arr));
    printf("Number of bytes written into the the file are : %d\n",iRet);
    close(fd);
   
    return 0;

}

