#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;

};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InserFirst(PPNODE First , PPNODE Last, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    if((*First == NULL) &&(*Last == NULL))
    {
        *First = newn;
        *Last = newn;//$
        
    }
    else
    {
        newn->next = *First;
        *First = newn;
        

    }
    (*Last)->next = *First;//$
    

}

void InserLast(PPNODE First , PPNODE Last, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    if((*First == NULL) &&(*Last == NULL))
    {
        *First = newn;
        *Last = newn;//$
        
    }
    else
    {
       (*Last)->next = newn;
       *Last = newn;
        

    }
    (*Last)->next = *First;//$
    

}

int main(int argc, char ** argv)
{
    PNODE Head = NULL;
    PNODE Tail = NULL;

    InserFirst(&Head,&Tail,51);
    InserFirst(&Head,&Tail,21);
    InserFirst(&Head,&Tail,11);

    InserLast(&Head,&Tail,101);
    InserLast(&Head,&Tail,111);
    InserLast(&Head,&Tail,121);
    return 0;
    
}