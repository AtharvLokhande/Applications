// Linked List 

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    // step1 : Allocate the memory foe new node
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    // step2 : Initialise the node
    newn->data = No;
    newn->next = NULL;

    // Step 3 : Check LInked list is empty or not
    if(*First == NULL)
    {
        *First = newn;
    }
    else    // If linked list contains atleat one node
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements of linked list are:\n");
    while(First!=NULL)
    {
        printf("%d")
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    return 0;
}


