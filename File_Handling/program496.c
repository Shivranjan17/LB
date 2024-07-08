#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
int main(int argc, char **argv)
{
    int fd = 0;
    char FileName[30];
    char Buffer[100] = {'\0'};
    int iRet = 0;
    int i = 0;
    int iCount = 0;
    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }

    while((iRet  = read(fd,Buffer,sizeof(Buffer)))!= 0)
    {
        for(i=0;i<iRet ;i++)
        {
            if(Buffer[i] == 'a' || Buffer[i]== 'e' || Buffer[i]== 'i' || Buffer[i]== '0' || Buffer[i]== 'u')
            {
                iCount++;
            }
        }
      
    }
    printf("Number of Digits are : %d\n",iCount);
    
    return 0;

}

