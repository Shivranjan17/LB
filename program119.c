//pointer arithematic concept


#include<stdio.h>

int Addition (int ptr[] ,int iSize)
{
    int i= 0;
    int Sum = 0;

     for (int i = 0; i < iSize; i++)
    {
        Sum = Sum + ptr[i];
     
    }
       return Sum;


}
int main(int argc, char **argv)
{
   
    int Arr[5] ;
    int iRet = 0;
    int i = 0;
    printf("Enter the Elements :\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&Arr[i]);
    }
    iRet = Addition(Arr,5);
    printf("Addition is :%d\n",iRet );

    return 0;

}