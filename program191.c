#include<stdio.h>
#include<stdbool.h>

void Strrevx(char *str) 

{
   char *start = str;//pointer 1
   char *end = str;//pointer 2
   char temp;
   while (*end != '\0')
   {
    end++;
   }
   end--;
   while (start < end)
   {
    temp = *start ;
    *start = *end ;
    *end = temp ;
    start++;
    end--;
   }
 
  
}   


int main (int argc, char **argv)
{
    char Arr[100];
    

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);
    Strrevx(Arr) ;
    printf("Reverse String is : %s\n",Arr);
        

    
    return 0;

}

