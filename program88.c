// Input : 5
//Output :  A   B   C   D   E




#include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;
    char ch = 'A';
  
    
    for (iCnt = 1 ;iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);
        
      
        
    }
    
      
        
    
      
   
    printf("\n");
}


int main(int argc, char **argv)
{
    int iValue = 0;
    printf("Enter number :\n");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;



    return 0;
}