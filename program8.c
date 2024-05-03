#include <stdio.h>
#include <stdbool.h> //for boolean
//boolean is used for true false condition thats why we used boolean condition
//algorithm 
/*----------------------------------------------------------------
Start 
    Accept one number as NO
    Divide that number by 2
    If remainder is 0 then
    then display the result as Even Number 
    otherwise display rhe result as Odd number 
    Stop
*/
////////////////////////////////////////////////////////////////
// Function Name -  CheckEvenOdd
//Description - used to check weathe number is even or odd
//Input - Integer 
//Output - Boolean 
//Author - Shivranjan Yogesh Pathak
//Date - 16/04/2024
bool CheckEvenOdd(unsigned int iNo)
{
    if ((iNo % 2 )==0)
    {
        return true;
    }
    {
        return false ;
    }
}
int main ()

{
    unsigned int iValue =0;
    bool bRet = false ;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue );

    if (bRet == true) 
    {
        printf("%d is the Even Number \n",iValue );


    }
    else 
    {
        printf("%d is the odd  Number \n" ,iValue );

    }



    return 0;

}