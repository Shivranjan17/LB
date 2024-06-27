#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
    struct node *prev;  // $
};//20 bytes

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
void Display(PNODE First)
{
    printf("\nNULL <=>");
    while(First != NULL)
    {
        printf("| %d |<=>",First->data);
        First = First -> next;
    }
    printf("NULL\n");
} // O(N)

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
} // O(N)

void InsertFirst(PPNODE First,int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;//$
    if(*First == NULL)
    {
        *First = newn;
        }
        else
        {
             
            newn->next = *First;
            (*First)->prev = newn;//$
           
            (*First) = newn;
            }
            


}

void InsertLast(PPNODE First,int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;//$
    if(*First == NULL)
    {
        *First = newn;
        }
        else
        {
             
            PNODE temp = *First;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
                temp->next = newn;
                newn->prev = temp;//$
                }
                
            

}

void InsertAtPos(PPNODE First , int No,int iPos)
{
    
}
void DeleteFirst(PPNODE First)
{
    if(*First == NULL)//case 1
    {
        printf("Unable to delete the node as LL is empty\n");
        return;

    }
    else if((*First)->next == NULL)//case 2
    {
        free(*First);
        *First = NULL;

    }
    else//case 3
    {
        (*First) = (*First)->next;
        free((*First)-> prev);//$
        (*First)->prev = NULL;//$

    }
    
}

void DeleteLast(PPNODE First)
{
    
    if(*First == NULL)//case 1
    {
        printf("Unable to delete the node as LL is empty\n");
        return;

    }
    else if((*First)->next == NULL)//case 2
    {
        free(*First);
        *First = NULL;

    }
    else//case 3
    {

    }

}

void DeleteAtPos(PPNODE First , int No,int iPos)
{

}

int main(int argc, char ** argv)
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,8);
    InsertFirst(&Head,4);
    InsertFirst(&Head,12);

    InsertLast(&Head,5);
    InsertLast(&Head,45);
    InsertLast(&Head,35);

    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&Head);
    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes are : %d\n",iRet);


    



    return 0;
}