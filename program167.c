#include<stdio.h>
int strlenCapX(char *str )
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if((*str >= '65')&&(*str<= '90'))//we can write ASCII value also A to Z
        {
            iCnt++;
        }
      
        str++;//
    }
    return iCnt ;

}
int main (int argc, char **argv)
{
    char Arr[20];
    int iRet = 0;
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);//special scanf
    iRet = strlenCapX(Arr);//strlen(100) imagiory base address
    printf("Number of capital letters are : %d\n",iRet );
    return 0;

}
