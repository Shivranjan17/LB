
#include<stdio.h>
#include<stdlib.h>
void DisplayEven (int Arr[] ,int iSize)
{
   int i = 0;
   printf("Even Elements are :\n");

   
   for (int i = 0; i <iSize ;i++)
   {
    if (Arr[i]%2 == 0)
    {
        printf("%d\n",Arr[i]);
    }
    
   }



}

int main(int argc, char **argv)
{
   
    int *Brr = NULL;
    int iCount  = 0;
    int i = 0;
   

    printf("Enter the number of elements that you want :\n");
    scanf("%d",&iCount);
    Brr = (int *)malloc(iCount * sizeof(int));
    
    printf("Enter the  elements : \n");
    for (int i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }


 
    DisplayEven(Brr,iCount);

    

    
    free (Brr);
    return 0;



}


