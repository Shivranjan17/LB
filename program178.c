// this code does not give output it will move forward without taking input

#include<stdio.h>
#include<stdbool.h>

bool CheckOccurance(char *str,char ch) 
{
    bool bFlag = false;
    while (*str != '\0')
    {
       if (*str == ch)
       {
       
        bFlag = true;
        break;
       }
      
       
        str++;

    }
    return bFlag;
   

}
int main (int argc, char **argv)
{
    char Arr[100];
    bool bRet = false;
    char cValue ;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);
    printf("Enter the character that you want to search : ");
    scanf("%c",&cValue);
    bRet = CheckOccurance(Arr,cValue);
    
    if (bRet == true)
    {
        printf("Character is present in the string\n"  );
    }
    else{
        printf("Character is not present in the string\n"  );
    }
    return 0;

}
