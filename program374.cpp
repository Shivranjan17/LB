#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    private:
        PNODE First;
        int iCount;

    public:
        DoublyLL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);        
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyLL::DoublyLL()
{
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0;
}

void DoublyLL::Display()
{
    PNODE temp = First;
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|<=>";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

int DoublyLL::Count()
{
    
    return iCount;
}

void DoublyLL::InsertFirst(int No)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;
    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    iCount++;
}

void DoublyLL::InsertLast(int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = new NODE;
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;
    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
        }
        iCount++;
}

void DoublyLL::InsertAtPos(int No, int iPos)
{
    if((iPos < 1) || (iPos > iCount+1))
    {
        printf("Invalid Position\n");
    }
    else if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        PNODE newn = NULL;
        PNODE temp1 = NULL;
        PNODE temp2 = NULL;
        int i = 0;
        newn = new NODE;
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;
        temp1 = First;
        for(i=1; i<iPos-1; i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = newn;
        newn->prev = temp1;
        newn->next = temp2;
        temp2->prev = newn;
        iCount++;
        }

}

void DoublyLL::DeleteFirst()
{
    if(First == NULL)
    {
        printf("Linked List is Empty\n");
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        PNODE temp = First;
        First = First->next;
        First->prev = NULL;
        delete temp;
        iCount--;
    }
    

    

}

void DoublyLL::DeleteLast()
{
    if(First == NULL)
    {
        printf("Linked List is Empty\n");
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        PNODE temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        delete temp;
        iCount--;
    }
}

void DoublyLL::DeleteAtPos(int iPos)
{
    if(iPos < 1 || iPos > iCount)
    {
        printf("Invalid Position\n");
    }
    else if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;
        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        delete temp;
        iCount--;
    }

}

int main()
{
    DoublyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.InsertAtPos(7,5);

    obj.Display();
    iRet = obj.Count();
    cout<< "Number of elements are :"<< iRet<<endl;

    obj.DeleteFirst();
    obj.Display();
    iRet = obj.Count();
    cout<< "Number of elements are :"<< iRet<<endl;

    obj.DeleteLast();
    obj.Display();
    iRet = obj.Count();
    cout<< "Number of elements are :"<< iRet<<endl;

    obj.DeleteAtPos(5);
    obj.Display();
    iRet = obj.Count();
    cout<< "Number of elements are :"<< iRet<<endl;
    






    

    return 0;
}