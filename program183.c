

#include<stdio.h>
#include<stdbool.h>

int CheckOccurance(char *str,char ch) 
{
    
    int iCnt = 1,iPos = -1;

    while (*str != '\0')
    {
       if (*str == ch)
       {
       
      iPos = iCnt;
       }
      
        iCnt++;
        str++;
    }
  return iPos;
  
}   


int main (int argc, char **argv)
{
    char Arr[100];
    int iRet = 0;
    char cValue ;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);
    printf("Enter the character that you want to search : ");
    scanf(" %c",&cValue);
    iRet = CheckOccurance(Arr,cValue);
    
    if (iRet != -1)
    {
        printf("Last occurance of the letter is  : %d\n",iRet);

    }
    else 
    {
        printf("Letter does not occur in the string\n");
    }
    return 0;

}

