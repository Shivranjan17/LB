#include <stdio.h>


void DisplayDigits(int iNo)
{
    int iDigit =0;
    while (iNo !=0)//not equal to for nrgative number
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }

}
int main()
{

    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    DisplayDigits(iValue);


    return 0;
}