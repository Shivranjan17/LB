

#include<stdio.h>


int CountFrequency(char *str,char ch) 
{
   
    int iCnt = 1;

    while (*str != '\0')
    {
       if (*str == ch)
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
    char cValue ;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);
    printf("Enter the character that you want to search : ");
    scanf(" %c",&cValue);//comapre this line with previous code space before %c
    iRet = CountFrequency(Arr,cValue);
    
    printf("Frequency is %d\n",iRet );

    return 0;

}

