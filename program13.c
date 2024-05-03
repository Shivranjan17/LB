#include <stdio.h>


int DisplayResult(float fMarks)
{ 
    if ((fMarks <0.0f)  ||(fMarks>100.0f))  // filter or or operator  is used here instead of && because we want to display the result even if one condition fails
    {
        printf("Invalid input\n");
        return 1;
    }
    if ((fMarks>=0.0f)&&(fMarks<35.0f))
    {
        return  2;
    }
    else 
    {
        return 3;
    }



}
int main ()
{
    float fvalue = 0.0f;
    int iRet = 0 ;
    printf("Please enter your percentage: ");
    scanf("%f",&fvalue);

    iRet = DisplayResult(fvalue);
    if (iRet ==  1)
    {
        printf("your input is invalid\n");

    } 
    else if (iRet==2)
    {
        printf("Student is fail in exam\n");

    }
   
    else if(iRet ==3)
    {
        printf("Student is Pass in the Exam\n");
    }
    return 0;



}