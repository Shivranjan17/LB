// Input : 5
//Output :  -5   -4     -3  -2  -1  0 1 2 3 4 5 



//program in 1 loop which is more optimal

#include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;
  
    
    for (iCnt = -iNo ;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
      
        
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

//program in 2 loop which is less optimal than program 1



/* #include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;
  
    
    for (iCnt = -iNo ;iCnt<=0;iCnt++)
    {
        printf("%d\t",iCnt);
      
        
    }
    for (iCnt = iNo ;iCnt>0;iCnt--)
    {
        printf("%d\t",iCnt);
      
        
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
*/
