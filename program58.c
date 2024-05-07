#include <stdio.h>


int  EvenDigits(int iNo)
{
    int iDigit = 0;
    int iCount =0;
    if (iNo <0 )
    {
        iNo = -iNo;
    }
    while (iNo !=0)//not equal to for nrgative number
    {
       
        iNo = iNo / 10;
          if(iDigit % 2 ==0)
        {
            printf("%d \n", iDigit);
            
        }
         iDigit = iNo % 10;
        
    }
   

}
int main()
{

    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d", &iValue);

     EvenDigits(iValue);
   


    return 0;
}