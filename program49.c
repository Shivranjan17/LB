//input : 5
//output : 1*2*3*4*5 = 120

#include <stdio.h>

unsigned long int Factorial( int iNo)
{
     int iCnt = 0;
     unsigned long int iFact = 1;
     iCnt =1;

      while (iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }

    return iFact;
}

int main ()
{
    int iValue = 0;
    unsigned long int iRet = 0;


    printf("Enter number : \n");
    scanf("%d",&iValue );

    iRet = Factorial(iValue);

    printf("Factorial is : %lu\n",iRet);//lu for long unsigned

    return 0;

}