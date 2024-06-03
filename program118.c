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
   
    int Arr[5] = { 10,20,30,40,50};
    int iRet = 0;   
    iRet = Addition(Arr,5);
    printf("Addition is :%d\n",iRet );

    return 0;

}