#include <stdio.h>
//user defined macro
#define RET_INVALID 1
#define RET_FAIL 2
#define RET_PASS 3


int DisplayResult(float fMarks)
{ 
    if ((fMarks <0.0f)  ||(fMarks>100.0f))  // filter or or operator  is used here instead of && because we want to display the result even if one condition fails
    {
        printf("Invalid input\n");
        return RET_INVALID;
    }
    if ((fMarks>=0.0f)&&(fMarks<35.0f))
    {
        return  RET_FAIL;
    }
    else 
    {
        return RET_PASS;
    }



}
int main ()
{
    float fvalue = 0.0f;
    int iRet = 0 ;
    printf("Please enter your percentage: ");
    scanf("%f",&fvalue);

    iRet = DisplayResult(fvalue);
    if (iRet == RET_INVALID )
    {
        printf("your input is invalid\n");

    } 
    else if (iRet== RET_FAIL)
    {
        printf("Student is fail in exam\n");

    }
   
    else if(iRet == RET_PASS) 
    {
        printf("Student is Pass in the Exam\n");
    }
    return 0;



}