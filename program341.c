#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data ;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
void InsertFirst(PPNODE First , int No)
{

    //Step 1 :Allocate Dynamic Memory for New node
    PNODE newn = NULL;//newn means new pointer 
    newn = (PNODE)malloc(sizeof(NODE));//allocate memory for new node

    //Step 2 : Initialize the new Node
    newn->data = No;
    newn->next =NULL;
    //Step 3 : Check is linked list empty
    if(*First == NULL)
    {
        *First = newn;
    }
    else//if linked list contains at least one node in it
    {
        newn->next = *First;
        *First = newn;

    }

}
void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL\n");
}
int Count (PNODE First)
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
    int iRet= 0;
    PNODE Head = NULL;
    InsertFirst(&Head , 101);
    InsertFirst(&Head , 51);
    InsertFirst(&Head , 21);
    InsertFirst(&Head , 11);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are :%d\n", iRet);



    return 0;
     

}