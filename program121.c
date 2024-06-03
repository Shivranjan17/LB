//Dynamic memory allocation program

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
   
    int *Brr = NULL;
    int iCount  = 0;
    //step1 = accept number of elemnts from user
    printf("Enter the number of elements that you want :\n");
    scanf("%d",&iCount);
    //step2 = allocate dynamic memory for that number of elements
    Brr = (int *)malloc(iCount * sizeof(int));
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

    //step4 = pass the address of that memory to the function (missing in this application)
    //missing 

    //step5 = free the memory after use
    free (Brr);//good programming practice
    return 0;



}

/*
step1 = accept number of elemnts from user
step2 = allocate dynamic memory for that number of elements
step3 = accept the values from the user and store into that memory
step4 = pass the address of that memory to the function (missing in this application)
step5 = free the memory after use
these steps will be followed 


//allocate 
//use 
//deallocate
in company language

*/