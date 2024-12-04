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

}

void Display(PNODE First)
{

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



/*
    void InsertFirst(PPNODE First, int NO)
    void InsertLast(PPNODE First, int No)
    void InsertAtPos(PPNODE First, int NO, INT Pos)

    void DeleateFirst(PPNODE First)
    void DeleateLast(PPNODE First)
    void DeleteAtPos(PPNODE First, int Pos)

    void Display(PNODE First)
    int Count(PNODE First)
*/
////////////////////////////////////////////////////////////////////
/*
    InserFisrt(&Head,11)
    InserLast(&Head,11)
    InserAtPos(&Head,11,5)

    DeleteFisrt(&Head)
    DeleteLast(&Head)
    DeleteAtPos(&Head,5)

    Display(Head)
    Count(Head)
*/

/*
    Topic to Red from c progrmaming for data structure

    premitive data type
    Size of all data type
    Loops (while and for)
    Dynamic memory (malloc and calloc)
    pointer and its types
    pointer to pointer
    Call by value and call by address
    Structure declaration
    Self referential structure
    Memory allocation of structure
    Direct and indirect accsing of structure
    typedef abd its use
*/