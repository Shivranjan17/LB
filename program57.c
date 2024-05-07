#include <stdio.h>


int  CountEvenDigits(int iNo)
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
        
          if(iDigit % 2 ==0)
        {
            printf("%d \n", iDigit);
            iCount++;
        }
        iNo = iNo / 10;
        
    }
    return iCount;

}
int main()
{

    int iValue = 0,iRet =0;
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = CountEvenDigits(iValue);
    printf("Number of Even Digits are: %d\n", iRet);


    return 0;
}