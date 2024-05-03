//accept the number from the user and check whether it is between 10 to 20  or not.

#include <stdio.h>
#include<stdbool.h>
bool CheckRange(int iNo)
{
    if ((iNo >= 10 && (iNo <= 20)))
    {return true;}
    else
    { return false;}
}
int main ()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf ("%d",&iValue);

    bRet = CheckRange (iValue);

    if (bRet == true)
    {
        printf("%d is in the range 10 to 20\n",iValue);
    }
    else 
    {
        printf("%d is not in the range 10 to 20\n",iValue);
        
    }
    return 0;


}
