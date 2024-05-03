#include <stdio.h>
#include <stdbool.h>

bool DisplayResult(float fMarks)
{ 
    if ((fMarks <0.0f)  ||(fMarks>100.0f))  // filter or or operator  is used here instead of && because we want to display the result even if one condition fails
    {
        printf("Invalid input\n");
        return false;
    }
    if ((fMarks>=0.0f)&&(fMarks<35.0f))
    {
        return false ;
    }
    else 
    {
        return true;
    }



}
int main ()
{
    float fvalue = 0.0f;
    bool bRet = false ;
    printf("Please enter your percentage: ");
    scanf("%f",&fvalue);

    bRet = DisplayResult(fvalue);
    if (bRet ==true)
    {
        printf("Student is Pass in the Exam\n");

    } 
   
    else
    {
        printf("Student is Pass in the Exam\n");
    }
    return 0;



}