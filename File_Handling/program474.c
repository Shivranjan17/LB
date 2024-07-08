#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main(int argc, char **argv)
{
    int fd = 0;
    char FileName[30];
    printf("Enter the file name that you want to create : \n");
    scanf("%s",FileName);

    fd = creat(FileName,0777);
    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File created successfully with fd %d\n", fd);

    }
    return 0;

}