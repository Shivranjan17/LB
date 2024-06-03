//template
#include<stdio.h>
#include<stdlib.h>
int ______ (int Arr[] ,int iSize)
{
   //logic


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
    


 
    int iRet = ________(Brr,iCount);
    

    
    free (Brr);
    return 0;



}

