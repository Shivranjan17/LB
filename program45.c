
#include <stdio.h>
#include <stdbool.h>

//input :11    no/2 = 5    iCnt =6
//Input : 17    No/2 =8    icNT = 9


//input :10    no/2 = 5    iCnt = 2
//Input : 15    No/2 =7    icNT = 3

bool CheckPrime(int iNo)
{

    int iCnt = 0 ;
    

    if (iNo <0)//updator
    {
        iNo = - iNo;// -(-5)=5
    }
    //  1           2                   3
    for (iCnt = 2; iCnt <=(iNo /2 ); iCnt++)//iCnt = loop counter
    {
        if ((iNo %iCnt)==0 )//4
        {
           
            break;//break keyword use

        }
    }
   if (iCnt >(iNo /2))//if the value of ICnt is greater than half of INo then it's not a prime number
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