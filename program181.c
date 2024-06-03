

#include<stdio.h>
#include<stdbool.h>

int CheckOccurance(char *str,char ch) 
{
    bool bFlag = false;
    int iCnt = 1;

    while (*str != '\0')
    {
       if (*str == ch)
       {
       
        bFlag = true;
        break;
       }
      
        iCnt++;
        str++;
    }
    if (bFlag == true)
    {
    return iCnt ;
    }
    else
    {
    return -1;

    }
  
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
    
    if (iRet == -1)
    {
        printf("Letter does not occur in the string\n");
        
    }
    else 
    {
      printf("Letter occurs at the position  : %d\n",iRet);
  
    }
    return 0;

}

