// Input : 5
//Output : &     &     &     &     &     *    *     *     *     * $....
//time complexity 3n


#include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;
    
    for (iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("&\t");
    }
      
    for (iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("*\t");
    }
     for (iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("$\t");
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