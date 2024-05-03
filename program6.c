#include <stdio.h>


////////////////////////////////////////////////////////////////////////////
//Function Header --
//  Function Name : Addition
//  Description   : it is used to perform addition of 2 floats
//  Input : Float , Float
//  Output : Float
//  Author : Shivranjan  Yogesh Pathak
//  Date : 15/04/2024
// 
////////////////////////////////////////////////////////////////////////////

float Addition (float fno1,float fno2)// user Defined function
{
    float fAns = 0.0;
    fAns = fno1 + fno2;
    return fAns; 
}

////////////////////////////////////////////////////////////////////////////
//  Function : main
//Description : it is the entry point function
////////////////////////////////////////////////////////////////////////////
int main ()// entry point function always main function
{
    float fValue1 = 0.0, fValue2= 0.0;
    float fResult= 0.0;


    printf ("Enter first no : \n");
    scanf("%f",&fValue1);

    printf("Enter second no :\n");
    scanf("%f",&fValue2);

    fResult = Addition(fValue1 ,fValue2);//calling of Addition function 


    printf("Addition of 2 numbers is : %f\n",fResult);



    



    return 0;
}