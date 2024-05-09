//program converted from static to dynamic
/* 
#
#       #
#       #       #
#       #       #       #
#       #       #       #       #
*/
//with filter
#include<stdio.h>

void Display(int iRow ,int iCol)
{
   ;
    int i=0,j=0 ;
    if (iRow != iCol)//filter used
    {
        printf("Number of rows and Column should be same \n");
        return;
    }
    
  
    for (i=1;i<=iRow;i++)//outer loop
    {
    for (j = 1 ;j<=iCol;j++)//inner loop
    {
        if (i>= j)
        {
            printf("#\t");//diagonal
        }
      
        
        
      
    }
     printf("\n");
    }
   
   
}


int main(int argc, char **argv)
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter number of rows :\n");
    scanf("%d",&iValue1);
    printf("Enter number of Column :\n");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
    return 0;



    return 0;
}