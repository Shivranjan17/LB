#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data ;
    struct node *next ;
};//self referential structure
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
int main()
{
    PNODE head = NULL ;
    NODE obj1 ;
    NODE obj2 ;
    NODE obj3 ;
   
   obj1.data = 11;
   obj1.next = &obj2 ;
   obj2.data = 21;
   obj2.next = &obj3 ;
   obj3.data = 51;
   obj3.next = NULL ;
   head = &obj1;
   printf("Head :%d\n", head);//100
   printf("&obj1 :%d\n", &obj1);//100
   printf("&obj2 :%d\n", &obj2);//200
   printf("&obj3 :%d\n", &obj3);//300

    printf("Head->data :%d\n", head->data);//11
    printf("Head->next :%d\n", head->next);//200
    printf("Head->next->data :%d\n", head->next->data);//300
    printf("Head->next->next->data :%d\n", head->next->next->next);//NULL

    printf("Head->next->data :%d\n", head->next->data);//21
    printf("Head->next->next->data :%d\n", head->next->next->data);//51
    
    
    
    
    
    
    return 0;
}