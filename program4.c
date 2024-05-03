//accept 2 numbers from user and perform their addition
#include <stdio.h>
int main() 
{
    //int i,j, k;
    float fValue1 = 0.0, fValue2= 0.0;
    float fResult= 0.0;


    printf ("Enter first no : \n");
    scanf("%f",&fValue1);

    printf("Enter second no :\n");
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2;// tjis is actual logic  of the program
    printf("Addition of 2 numbers is : %f\n",fResult);



    

    return 0;
}

/*
step1- Understand the problem statement 
step2- write the algorithm
step3- Decide the programming language
step4- Write the program
step5- Test the program


Problem Statement - accept 2 numbers and perform addition


Step1 - we conclude that the 2 numbers are of floating point format
step2 - Algorithm
Start
    Accept first number from the user and consider it as no1 
    Accept second number from the user and consider it as no2 
    Create one variable to store the answer as Ans 
    Perform the addition of No1 and No2 
    Store  the result in ans 
    Display the value of ans as a Result 
Stop


step3 Decide the programming language 
we are going to write the code in c programming

step4 -write the code by seeing the algorithm

your logic should be reusable and resharable and dont write logic inside main  function.


*/

