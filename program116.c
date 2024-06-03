//pointer arithematic concept


#include<stdio.h>
void Display(int *ptr ,int iSize)
{
    int i= 0;

     for (int i = 0; i < iSize; i++,ptr++)
    {
        printf("%d\n", *ptr);
        
    }


}
int main(int argc, char **argv)
{
   
    int Arr[5] = { 10,20,30,40,50};   
    Display(Arr,5);

    //Display(Address(100),5) 5 is no of elements
    return 0;

}