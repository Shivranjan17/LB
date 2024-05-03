
#include <stdio.h>
#include <stdbool.h>
CheckPrime(int iNo)
{
    int iCnt = 0 ,iCount = 0;

    if (iNo <0)//updator
    {
        iNo = - iNo;// -(-5)=5
    }
    //  1           2                   3
    for (iCnt = 2; iCnt <=(iNo /2 ); iCnt++)//iCnt = loop counter
    {
        if ((iNo %iCnt)==0 )//4
        {
            iCount ++;

        }
    }
    if (iCount  == 0)
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

     bRet = CheckPrime(iValue);
     if (bRet == true)
     {
        printf("The Number is Prime \n",iValue);
     }
     else
     {
        printf("The Number is not Prime \n",iValue);
     }


    return 0;
}