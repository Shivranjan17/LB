
#include<stdio.h>
#include<stdlib.h>
int EvenAddition (int Arr[] ,int iSize)
{
   int i = 0;
   int iSum= 0;
 
   
   
   for (int i = 0; i <iSize ;i++)
   {
    if (Arr[i]%2 == 0)
    {
       iSum = iSum + Arr[i]; 
    }
    
   }
   return iSum;



}

int main(int argc, char **argv)
{
   
    int *Brr = NULL;
    int iCount  = 0;
    int i = 0;
    int iRet = 0;
   

    printf("Enter the number of elements that you want :\n");
    scanf("%d",&iCount);
    Brr = (int *)malloc(iCount * sizeof(int));
    
    printf("Enter the  elements : \n");
    for (int i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }


 
   iRet =  EvenAddition(Brr,iCount);
   printf("Addition of even numbers is : %d\n", iRet);

    

    
    free (Brr);
    return 0;



}


