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
    else
    {
        printf("File opened successfully with fd %d\n", fd);

    }
    return 0;

}

/*----------------------------------------------------------------
O_RDONLY     Read Mode 
O_WRONLY     Write Mode
O_RDWR       READ + WRITE MODE
O_CREATE     Create MODE
O_APPEND     Append Mode


*/