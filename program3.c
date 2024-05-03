//accept 2 numbers from user and perform their addition
#include <stdio.h>
int main() 
{
    //int i,j, k;
    int iValue1 = 0, iValue2= 0;
    int iResult= 0;


    printf ("Enter first no : \n");
    scanf("%d",&iValue1);

    printf("Enter second no :\n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;
    printf("Addition of 2 numbers is : %d\n",iResult);



    

    return 0;
}