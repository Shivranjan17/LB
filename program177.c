#include<stdio.h>
#include<stdbool.h>

bool CheckOccurance(char *str )
{
    bool bFlag = false;
    while (*str != '\0')
    {
       if ((*str == 'L')|| (*str == 'l'))
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
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);//special scanf
    bRet = CheckOccurance(Arr);//strlen(100) imagiory base address
    
    if (bRet == true)
    {
        printf("l/L is present in the string\n"  );
    }
    else{
        printf("l/L is not present in the string\n"  );
    }
    return 0;

}
