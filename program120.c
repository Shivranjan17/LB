


#include<stdio.h>

int Addition (int Arr[] ,int iSize)
{
    int i= 0;
    int Sum = 0;

     for (int i = 0; i < iSize; i++)
    {
        Sum = Sum + Arr[i];
     
    }
       return Sum;


}
int main(int argc, char **argv)
{
   
    int Brr[5] ;
    int iRet = 0;
    int i = 0;
    printf("Enter the Elements :\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&Brr[i]);
    }
    iRet = Addition(Brr,5);
    printf("Addition is :%d\n",iRet );

    return 0;

}