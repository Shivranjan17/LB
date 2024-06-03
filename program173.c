#include<stdio.h>
int CountSpace(char *str )
{
    int iCnt = 0;
    while (*str != '\0')
    {
       if (*str == ' ')
       {
        iCnt++;
       }
        str++;

    }
    return iCnt ;

}
int main (int argc, char **argv)
{
    char Arr[100];
    int iRet = 0;
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);//special scanf
    iRet = CountSpace(Arr);//strlen(100) imagiory base address
    printf("Number of Space is : %d\n",iRet );
    return 0;

}
