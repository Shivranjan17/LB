#include <stdio.h>


int  OddDigits(int iNo)
{
    int iDigit = 0;
    int iCount =0;
    if (iNo <0 )
    {
        iNo = -iNo;
    }
    while (iNo !=0)//not equal to for nrgative number
    {
        iDigit = iNo % 10;
        
          if(iDigit % 2 !=0)
        {
            printf("%d \n", iDigit);
            
        }
        iNo = iNo / 10;
        
    }
   

}
int main()
{

    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d", &iValue);

     OddDigits(iValue);
   


    return 0;
}