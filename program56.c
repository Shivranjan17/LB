#include <stdio.h>


int  CountDigits(int iNo)
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
        iNo = iNo / 10;
      
        iCount++;
    }
    return iCount;

}
int main()
{

    int iValue = 0,iRet =0;
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);
    printf("Number of Digits are: %d\n", iRet);


    return 0;
}