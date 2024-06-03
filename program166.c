#include<stdio.h>
int strlenCapX(char *str )
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if((*str >= 'A')&&(*str<= 'Z'))//we can write ASCII value also A to Z
        {
            iCnt++;
        }
      
        str++;//if we write this inside if and we enter string for small letter then it will not move forward

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