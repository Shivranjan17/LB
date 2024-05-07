
// *  *  *  *  *  *


#include<stdio.h>
void Display(int iNo)
{
    int iCnt =0;
   

    for (int iCnt = 1; iCnt <=iNo; iCnt++)//array asla tar 0 vaprava
    {
        printf("*\t");
        
    }
   

}
int main(int argc, char **argv)
{
    int iValue =0;
    
    printf("Enter Frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);




    return 0;
}