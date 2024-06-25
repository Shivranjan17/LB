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

}
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

}
int Display(PNODE First )
{
    while(First != NULL)
    {
        printf("|%d|->%d|\n", First->data);
        First = First->next;
    }
    printf("NULL\n");

}
int Count(PNODE First )
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
  return iCnt;


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

    return 0;
}

/*----------------------------------------------------------------
InsertFirst

1:Allocate4 memory for node 
2:Initialise that node
3:Check if linked list is empty or not 
4:if LL is empty store the address of new node in the Heap pointer through First
5:if LL is not empty then store the address of old first node in the next of new node
6:Update the Head accordingly
*/