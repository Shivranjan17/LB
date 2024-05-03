#include <stdio.h>
float Addition (float fno1,             //First input 
                float fno2              //Second input
                )
{
    float fAns = 0.0;                   //Variable to store result
    fAns = fno1 + fno2;
    return fAns; 
}
int main ()
{
    float fValue1 = 0.0;               //Variable for first number
    float fValue2= 0.0;                //Variable of second number 
    float fResult= 0.0;                //Variable to the return result


    printf ("Enter first no : \n");
    scanf("%f",&fValue1);

    printf("Enter second no :\n");
    scanf("%f",&fValue2);

    fResult = Addition(fValue1 ,fValue2);//calling of Addition function 


    printf("Addition of 2 numbers is : %f\n",fResult);



    



    return 0;
}