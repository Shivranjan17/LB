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

int main(int argc, char ** argv)
{
    PNODE Head = NULL;


    return 0;
}