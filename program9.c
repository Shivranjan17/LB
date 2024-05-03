#include <stdio.h>
#include <stdbool.h> //for boolean
//boolean is used for true false condition thats why we used boolean condition
//algorithm 
/*----------------------------------------------------------------
Start 
    Accept one number as NO
    Divide that number by 3
    If remainder is 0 
    Divide that number by 5
    If remainder is 0
    then print number is divisible by 3 and 5 
    otherwise disaplay  it is not divisible by  3 and 5
    
    Stop
*/
////////////////////////////////////////////////////////////////
// Function Name -  CheckDivisible
//Description - used to check weather number is divisible by 3 and 5
//Input - Integer 
//Output - Boolean 
//Author - Shivranjan Yogesh Pathak
//Date - 16/04/2024
bool CheckDivisible(unsigned int iNo)
{
    if ((iNo % 3 )==0 && (iNo  % 5) == 0 )//&& it is a logical operator
    {
        return true;
    }
    else
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

    bRet = CheckDivisible(iValue );

    if (bRet == true) 
    {
        printf("%d is divisible by 3 and 5 \n",iValue );


    }
    else 
    {
        printf("%d is not divisible by either 3 or 5 \n" ,iValue );

    }



    return 0;

}

/*================================================================
Logical Operator 

First  Second   &&    || 
true      true      T     T
true      false     F     T
false     false     F     F
false     true      F     T

*/