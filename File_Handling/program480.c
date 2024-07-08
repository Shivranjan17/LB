#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
int main(int argc, char **argv)
{
    int fd = 0;
    char FileName[30];
    char Arr[100] ;
    int iRet = 0;
    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    iRet = read(fd,Arr,10);
    printf("Number of bytes successfully read from the file : %d\n",iRet);
    printf("Data from file is : %s\n",Arr);
    close(fd);
   
    return 0;

}

