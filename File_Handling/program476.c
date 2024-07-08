#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main(int argc, char **argv)
{
    int fd = 0;
    char FileName[30];
    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    write(fd,"Hello World",11);
   
    return 0;

}

