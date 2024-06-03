//Dynamic memory allocation program

#include<stdio.h>
#include<stdlib.h>
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
   
    int *Brr = NULL;
    int iCount  = 0;
    int i = 0;
    int iRet = 0;
    //step1 = accept number of elemnts from user
    printf("Enter the number of elements that you want :\n");
    scanf("%d",&iCount);
    //step2 = allocate dynamic memory for that number of elements
    Brr = (int *)malloc(iCount * sizeof(int));//for input 4 it is 16 4 * 4 
    // step3 = accept the values from the user and store into that memory
    printf("Enter the number of elements : \n");
    for (int i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }
    printf("Entered Elements are :\n");
    for (int i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }

    //step4 = pass the address of that memory to the function 
    int iRet = Addition(Brr,iCount);
    printf("Addition of all elements is : %d\n",iRet);

    //step5 = free the memory after use
    free (Brr);//good programming practice
    return 0;



}

