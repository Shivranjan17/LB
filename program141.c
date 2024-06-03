#include<stdio.h>
#include<stdlib.h>
void Updator(int Arr[],int iSize)
{
    int i=0;
    for (i=0;i<iSize;i++)
    {
        if((Arr[i]> 100 ))
        {
             Arr[i]= Arr[i]+1;
       //Arr[i]++;

        }
       
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
    Updator(Brr,iCount);
    printf("Data after updation is :\n");
    for (i = 0;i<iCount;i++)
    {
        printf("%d\n",Brr[i]);
    }
      free(Brr);
    return 0;

}