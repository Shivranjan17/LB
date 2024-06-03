//linear Search
#include<stdio.h>
#include<stdlib.h>
int Search (int Arr[] ,int iSize,int iNo)
{
   int i = 0;
   int iFrequency = 0;
 
   
   
   for (int i = 0; i <iSize ;i++)
   {
    if (Arr[i] ==iNo)
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
    int iValue = 0;
    int i = 0;
    int iRet = 0;
   

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



 
   iRet =  Search(Brr,iCount,iValue);
   printf("Frequency of that number is : %d\n",iRet );
   

    

    
    free (Brr);
    return 0;



}


