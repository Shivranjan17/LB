#include <stdio.h>
//user defined macro
#define RET_INVALID -1
#define RET_FAIL 1
#define RET_PASSCLASS 2
#define RET_SECONDCLASS 3
#define RET_FIRSTCLASS 4
#define RET_FIRSTCLASSDISTINCTION 5


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
    else if((fMarks>=35.0f)&&(fMarks<50.0f))
    {
        return RET_PASSCLASS;
    }
    else if((fMarks>=50.0f)&&(fMarks<60.0f))
    {
        return RET_SECONDCLASS;
    }

    else if((fMarks>=60.0f)&&(fMarks<75.0f))
    {
        return RET_FIRSTCLASS;
    }
    else if((fMarks>=75.0f)&&(fMarks<=100.0f))
    {
        return RET_FIRSTCLASSDISTINCTION;
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
   
    else if(iRet == RET_PASSCLASS) 
    {
        printf("Student is in Pass Class\n");
    }
    
    else if(iRet == RET_SECONDCLASS) 
    {
        printf("Student is in Second Class\n");
    }

    else if(iRet == RET_PASSCLASS) 
    {
        printf("Student is in First Class\n");
    }
    else if (iRet == RET_FIRSTCLASSDISTINCTION)
    {
         printf("Student is in First Class distinction\n");

    }
    return 0;
    
  
    



}