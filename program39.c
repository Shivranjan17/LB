
/* Accept number as No
search all its factors
perform addition of all the factors thatits addition is same as No 
then Display as No is perfect number 
otherwise Display as No is not a perfect number 
*/

#include <stdio.h>
#include <stdbool.h>
CheckPerfect(int iNo)
{
    int iCnt = 0 ,iSum = 0;
    for (iCnt = 1; iCnt <=(iNo / 2); iCnt++)
    {
        if ((iNo %iCnt)==0 ){
            iSum = iSum + iCnt;

        }
    }
    if (iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }

}



int main ()
{
    int iValue = 0;
    bool bRet = false ;

    printf("Enter the Number : \n");
    scanf(" %d",&iValue);

     bRet = CheckPerfect(iValue);
     if (bRet == true)
     {
        printf("The Number is Perfect \n",iValue);
     }
     else
     {
        printf("The Number is not perfect \n",iValue);
     }


    return 0;
}