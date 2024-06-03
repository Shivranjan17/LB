#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iSize)
{
    int i=0;
    printf("Elements in Reverse order :\n");
    for (i=iSize-1;i>=0;i--)
    {
       printf("%d\n",Arr[i]);
       
    }


}
int main (int argc, char **argv)
{
    int *Brr = NULL;
    int iCount = 0;
   
    int i = 0;

    printf("Enter number of Elements that you want to enter :");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount*sizeof(int));
    printf("Enter the Elements : \n");
    for (i = 0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);

    }
    Display(Brr,iCount);
    free(Brr);
    
    return 0;

}