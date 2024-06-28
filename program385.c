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
void InsertAtPos(PPNODE First , PPNODE Last , int No,int iPos)
{
    int i =0;
    int iLength = 0;
    iLength = Count(*First,*Last);
    if((iPos < 1) || (iPos > iLength+1))
    {
        printf("Invalid Position\n");
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(First,Last,No);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(First,Last,No);
    }
    else
    {
        PNODE newn = NULL;
        PNODE temp = NULL;
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;
        temp = *First;
        for(i=1;i<iPos-1;i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        
}
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL))//Empty LL
    {
        return;
    }
    else if((*First ==*Last))//Single node
    {
        free(*First);
        *First = NULL;
        *Last = NULL;

    }
    else//multiple node
    {
        *First = (*First) -> next;
        free((*Last)->next);
        (*Last)->next = *First;

    }

}

void DeleteLast(PPNODE First ,PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL))//Empty LL
    {
        return;
    }
    else if((*First ==*Last))//Single node
    {
        free(*First);
        *First = NULL;
        *Last = NULL;

    }
    else//multiple node
    {
        PNODE temp = *First;
        while(temp->next != *Last)
        {
            temp = temp->next;
        }
        free(*Last);
        *Last = temp;
        temp->next = NULL;
            

    }
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


    InsertAtPos(&Head,&Tail,105,5);
    Display(Head,Tail);
     iRet = Count(Head,Tail);
    printf("Number of Elements are :%d\n",iRet);

   

    return 0;
    
}