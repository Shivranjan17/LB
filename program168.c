#include<stdio.h>
int strlenSmallX(char *str )
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if((*str >= 'a')&&(*str<= 'z'))
        {
            iCnt++;
        }
      
        str++;

    }
    return iCnt ;

}
int main (int argc, char **argv)
{
    char Arr[20];
    int iRet = 0;
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);//special scanf
    iRet = strlenSmallX(Arr);//strlen(100) imagiory base address
    printf("Number of small letters are : %d\n",iRet );
    return 0;

}