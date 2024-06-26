#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;//pointer 
};
typedef struct node NODE;
typedef struct node *  PNODE;
typedef struct node ** PPNODE;
void InsertFirst(PPNODE First , int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;//newn = new node
    if(*First==NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;

    }

}//O(1)
void InsertLast(PPNODE First , int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;//newn = new node
    if(*First==NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        

    }

}//O(N)
int Display(PNODE First )
{
    while(First != NULL)
    {
        printf("|%d|->", First->data);
        First = First->next;
    }
    printf("NULL\n");

}//O(N)
int Count(PNODE First )
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
  return iCnt;


}//O(N)
void DeleteFirst(PPNODE First)//case 1
{
    PNODE temp = NULL;
    if (*First == NULL)
    {
         printf("unable to delete as Linked List is empty\n");
         return;
      

    }
    else if ((*First)->next == NULL)//case 2
    {
        free(*First);
        *First = NULL;
       

    }
    else//case 3 see from diagram all cases 
    {
        temp = *First;
        *First = (*First)->next;
        free(temp);

       

    }
}

void DeleteLast(PPNODE First)//case 1
{
    if (*First == NULL)
    {
         printf("unable to delete as Linked List is empty\n");
         return;
      

    }
    else if ((*First)->next == NULL)//case 2
    {
        free(*First);
        *First = NULL;
       

    }
    else//case 3 see from diagram all cases 
    {
       

    }
}

int main(int argc, char **argv)
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    
    InsertLast(&Head,151);
    InsertLast(&Head,121);
    InsertLast(&Head,111);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are : %d\n",iRet);

    DeleteFirst(&Head);
    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are : %d\n",iRet);

    return 0;
}

