#include <stdio.h>


int  ReverseDigits(int iNo)
{
    int iDigit = 0;
  
   
    int iRev =0;//reverse
    if (iNo <0 )
    {
        iNo = -iNo;
    }
    while (iNo !=0)//not equal to for nrgative number
    {
        iDigit = iNo % 10;
     
        iRev = (iRev *10) + iDigit; //add the last digit in reverse order
           iNo = iNo / 10;
        
    }
    return iRev;
   

}
int main()
{

    int iValue = 0,iRet =0;
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = ReverseDigits(iValue);
    printf("The reversed Number is : %d\n", iRet);
   

    return 0; 
}