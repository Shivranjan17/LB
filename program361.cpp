#include<iostream>
using namespace std;
struct node 
{
    int Data; 
    struct node *next; 

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


class SinglyLL
{
    public:
    PNODE First;
    int iCount;
    SinglyLL()
    {
        cout<<"Inside Constructor\n";
        First = NULL;
        iCount = 0;
    }


};

int main(int argc, char **argv)
{
    SinglyLL obj1;


    
    return 0;

}