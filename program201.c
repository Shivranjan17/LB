#include <stdio.h>
int Addition (int ino1,             //First input 
                int ino2              //Second input
                )
{
    int iAns = 0;                   //Variable to store result
    iAns = ino1 + ino2;
    return iAns; 
}
int main ()
{
    int iValue1 = 0;               //Variable for first number
    int iValue2= 0;                //Variable of second number 
    int iResult= 0;                //Variable to the return result


    printf ("Enter first no : \n");
    scanf("%f",&iValue1);

    printf("Enter second no :\n");
    scanf("%f",&iValue2);

    iResult = Addition(iValue1 ,iValue2);//calling of Addition function 


    printf("Addition of 2 numbers is : %f\n",iResult);



    



    return 0;
}