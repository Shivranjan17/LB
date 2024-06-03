

#include<stdio.h>
#include<stdbool.h>

void Display(char *str) 
{
    while (*str != '\0')
    {
       printf("%c\n", *str);
       str++;
    }
 
  
}   


int main (int argc, char **argv)
{
    char Arr[100];
    

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);
    Display(Arr) ;
        

    
    return 0;

}

