
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
int Search (int Arr[] ,int iSize,int iNo)
{
   int i = 0;
  
   for (int i = 0; i <iSize ;i++)
   {
    if (Arr[i] ==iNo)
    {
      
      break;
    }
    if (i == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
    
    
   }
   



}

int main(int argc, char **argv)
{
   
    int *Brr = NULL;
    int iCount  = 0;
    int iValue = 0;
    int i = 0;
    bool bRet = false;
   

    printf("Enter the number of elements that you want :\n");
    scanf("%d",&iCount);
    Brr = (int *)malloc(iCount * sizeof(int));
    
    printf("Enter the  elements : \n");
    for (int i = 0; i <iCount ; i++)
    {
        scanf("%d",&Brr[i]);
    }
    printf("Enter the elements that you want to search :\n");
    scanf("%d",&iValue);



 
   bRet =  Search(Brr,iCount,iValue);
   if (bRet == true)
   {
    printf("The number is present in the array\n");
   }
   else
   {
    printf("The number is not present in the array\n");
    }
   

    

    
    free (Brr);
    return 0;



}


