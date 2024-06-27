//public private abstraction
#include<iostream>
using namespace std;
struct node 
{
    int data; 
    struct node *next; 

};

typedef struct node NODE;
typedef struct node * PNODE;



class SinglyLL
{
    private:
    PNODE First;
    int iCount;

    public:
    SinglyLL();

    void Display();
    int Count();
    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPos(int No,int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
    
    


};
 SinglyLL::SinglyLL()
    {
        cout<<"Inside Constructor\n";
        First = NULL;
        iCount = 0;
    }

    void SinglyLL::Display()
    {
        PNODE temp = First;
        while(temp != NULL)
        {
            cout<<"|"<<temp->data<<"|->";
            temp = temp->next;
        }
        cout<<"NULL\n";
            
        
    }
    int SinglyLL::Count()
    {
        return iCount;
    }

    void SinglyLL::InsertFirst(int No)
    {
        PNODE newn = NULL;
        newn = new NODE;//malloc in C
        newn->data = No;
        newn->next = NULL;
        if(First == NULL)//if(iCount == 0)
        {
            First = newn;
        }
        else
        {
            newn->next = First;
            First = newn;
        }
        iCount++;
                

        

    }
    void SinglyLL::InsertLast(int No)
    {
        PNODE newn = NULL;
        newn = new NODE;//malloc in C
        newn->data = No;
        newn->next = NULL;
        if(First == NULL)//if(iCount == 0)
        {
            First = newn;
        }
        else
        {
           PNODE temp = First;
           while(temp->next != NULL)
           {
            temp = temp->next;
            }
            temp->next = newn;
            
        }
        iCount++;

    }
    void SinglyLL::InsertAtPos(int No,int iPos)
    {
        if(iPos < 1 || iPos > iCount+1)
        {
            cout<<"Invalid Position\n";
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
            newn = new NODE;//malloc in C
            newn->data = No;
            newn->next = NULL;

            PNODE temp = First;
            for(int i=1;i<iPos-1;i++)
            {
                temp = temp->next;
            }
                newn->next = temp->next;
                temp->next = newn;
                iCount++;// laksha thevaaaaaa very important
                
        }
        

    }

    void SinglyLL::DeleteFirst()
    {
        if(First == NULL)
        {
            cout<<"List is empty"<<endl;
        }
        else if (First->next == NULL)
        {
            delete First;
            First = NULL;
        }
        else
        {
            PNODE temp = First;
            First = First->next;
            delete temp;
        }
        iCount--;        

    }
    void SinglyLL::DeleteLast()
    {
        if(First == NULL)
        {
            cout<<"List is empty"<<endl;
        }
        else if (First->next == NULL)
        {
            delete First;
            First = NULL;
        }
        else
        {
        PNODE temp = First;
        while(temp->next->next != NULL)
        {
                
            temp = temp->next;
        }
            delete temp->next;
            temp->next = NULL;
            
        }
        iCount--;   

    }
    void SinglyLL::DeleteAtPos(int iPos)
    {
        if(iPos < 1 || iPos > iCount)
        {
            cout<<"Invalid Position\n";
        }
        else if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount+1)
        {
            DeleteLast();
        }
        else
        {
            PNODE temp1 = First;
            for(int i=1;i<iPos-1;i++)
            {
                temp1 = temp1->next;
            }
            PNODE temp2 = temp1->next;
            temp1->next = temp2->next;
            delete temp2;
            iCount--;

            
                
        }

    }


int main(int argc, char **argv)
{
    SinglyLL obj;
    int iRet = 0;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are :"<<iRet<<endl;


    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are :"<<iRet<<endl;

    obj.InsertAtPos(105,5);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are :"<<iRet<<endl;

    obj.DeleteAtPos(5);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are :"<<iRet<<endl;



    
    return 0;

}