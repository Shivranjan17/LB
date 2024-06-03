//Case sensitive for small letters

#include<stdio.h>
int strlenVowel(char *str )
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if((*str =='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
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
    iRet = strlenVowel(Arr);//strlen(100) imagiory base address
    printf("Number of Vowel are : %d\n",iRet );
    return 0;

}