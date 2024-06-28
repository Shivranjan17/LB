#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;

};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE First ,PNODE Last)
{
    if((First == NULL) && (Last == NULL))
    {
        printf("LinkedList is empty\n");
        return;
    }

    do
    {
        printf("| %d | -> ", First->data);
        First = First->next;
    } while (First != Last->next);
    printf("\n");
    
    
    
}
int Count(PNODE First , PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First->next;
    } while (First != Last->next);
    return iCnt;

}

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
    int iRet = 0;

    InserFirst(&Head,&Tail,51);
    InserFirst(&Head,&Tail,21);
    InserFirst(&Head,&Tail,11);

    InserLast(&Head,&Tail,101);
    InserLast(&Head,&Tail,111);
    InserLast(&Head,&Tail,121);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of Elements are :%d\n",iRet);


    

    return 0;
    
}