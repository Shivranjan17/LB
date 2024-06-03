
#include<stdio.h>
#include<stdlib.h>
int Count (int Arr[] ,int iSize)
{
   int i = 0;
   int iFrequency = 0;
 
   
   
   for (int i = 0; i <iSize ;i++)
   {
    if (Arr[i]%5 == 0)
    {
      iFrequency++;
    }
    
    
   }
   return iFrequency;



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


 
   iRet =  Count(Brr,iCount);
   printf("Divisible by 5 count is : %d\n",iRet );
   

    

    
    free (Brr);
    return 0;



}


