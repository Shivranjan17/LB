#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iSize)
{
    int i=0,iMax=0;
    for (i=0;i<iSize;i++)
    {
        if (Arr[i]>iMax)
        {
            iMax=Arr[i];
        }
    }
return iMax;

}
int main (int argc, char **argv)
{
    int *Brr = NULL;
    int iCount = 0;
    int iRet = 0;
    int i = 0;

    printf("Enter number of Elements that you want to enter :");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount*sizeof(int));
    printf("Enter the Elements : \n");
    for (i = 0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);

    }
    iRet = Maximum(Brr,iCount );
    printf("Maximum number is :  %d\n",iRet );
    free(Brr);
    return 0;

}