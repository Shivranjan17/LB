#include<stdio.h>
void Swap(int *p,int *q)
{
    int temp =0;
    temp = *p;
    *p = *q;
    *q = temp;

}

int main(int argc, char **argv)
{
    int A = 0,B= 0;
    printf("Enter Firet number :\n");
    scanf("%d",&A);

    printf("Enter second number :\n");
    scanf("%d",&B);
    Swap(&A,&B);

    printf("Value of A after swapping :%d\n",A);
    printf("Value of B after swapping :%d\n",B);
    return 0;
}