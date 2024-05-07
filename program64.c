#include <stdio.h>


int  SumofOddDigits(int iNo)
{
    int iDigit = 0;
  
    int iSum = 0;
    if (iNo <0 )
    {
        iNo = -iNo;
    }
    while (iNo !=0)//not equal to for nrgative number
    {
        iDigit = iNo % 10;
     
        
         if(iDigit % 2 !=0)
        {
            
             iSum =iSum + iDigit;
        }
           iNo = iNo / 10;
        
    }
    return iSum;
   

}
int main()
{

    int iValue = 0,iRet =0;
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = SumofOddDigits(iValue);
    printf(" Sum of Odd Digits are: %d\n", iRet);


    return 0;
}