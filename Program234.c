#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if ((*First == NULL) && (*Last == NULL))
    {
        *First = *Last = newn;
        (*First)->prev = *Last;
        (*Last)->next = *First;
        
    }
    else
    {
        (*First)->prev=newn;
        newn->next = *First;
        *First = newn;
        (*First)->prev = *Last;
        (*Last)->next = *First;
        
    }   
}

void Display(PNODE First, PNODE Last)
{
    printf("Elements of Linked list are : \n");

    do
    {
        printf("| %d |<=>",First->data);
        First = First -> next;
    }while(First != Last->next);
    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First -> next;
    }while(First != Last->next);
    return iCnt;
}

void InsertLast(PPNODE First, PPNODE Last, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if ((*First == NULL) && (*Last == NULL))
    {
        *First = *Last = newn;
        (*First)->prev = *Last;
        (*Last)->next = *First;
    }
    else
    {
        (*Last)->next = newn;
        newn->prev= *Last;
        *Last = newn;
        (*Last)->next = *First;
        (*First)->prev = *Last;
    }   
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    PNODE temp = *First;

    if ((*First == NULL) && (*Last == NULL))
    {
        return;
    }
    else if ((*First) == (*Last))
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        (*First)= (*First)->next;
        (*Last)->next = (*First);
        (*First)->prev = *Last;
        free(temp);

    }   
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    PNODE temp = *Last;

    if ((*First == NULL) && (*Last == NULL))
    {
        return;
    }
    else if ((*First) == (*Last))
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        (*Last)= (*Last)->prev;
        (*Last)->next = (*First);
        (*First)->prev = *Last;
        free(temp);

    }   
}

void InsertAtPos(PPNODE First, PPNODE Last, int ipos, int iNo)
{
    int iNodeCnt = 0, iCnt = 0;
    iNodeCnt = Count(*First, *Last);

    if ((ipos<1) || (ipos > (iNodeCnt+1)))
    {
        printf("Invallied position : %d\n",ipos);
    }

    if (ipos == 1)
    {
        InsertFirst(First,Last,iNo);
    }
    else if (ipos == iCnt+1)
    {
        InsertLast(First,Last,iNo);
    }
    else
    {
        PNODE newn = (PNODE)malloc(sizeof(NODE));
        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;
        PNODE temp = *First;

        for(iCnt=1; iCnt<ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        temp ->next->prev = newn;
        newn->next = temp ->next;
        newn->prev =temp;
        temp->next=newn;
        
    }
}

void DeleteAtPos(PPNODE First, PPNODE Last, int ipos)
{
    int iNodeCnt = 0;
    int iCnt = 0;
    PNODE temp1 = *First;
    PNODE temp2 = NULL;

    iNodeCnt = Count(*First, *Last);

    if ((ipos<1) || (ipos > (iNodeCnt)))
    {
        printf("Invallied position : %d\n",ipos);
    }

    if (ipos == 1)
    {
        DeleteFirst(First,Last);
    }
    else if (ipos == iNodeCnt)
    {
        DeleteLast(First,Last);
    }
    else
    {
        PNODE temp = *First;

        for(iCnt = 1; iCnt<ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
        

    }
}


int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head, &Tail,51);
    InsertFirst(&Head, &Tail,21);
    InsertFirst(&Head, &Tail,11);

    Display(Head, Tail);
    iRet = Count(Head, Tail);

    printf("Number of elements are : %d\n",iRet);   

    InsertLast(&Head, &Tail,101);
    InsertLast(&Head, &Tail,111);
    InsertLast(&Head, &Tail,121);

    Display(Head, Tail);
    iRet = Count(Head, Tail);

    printf("Number of elements are : %d\n",iRet);   

    DeleteFirst(&Head, &Tail);

    Display(Head, Tail);
    iRet = Count(Head, Tail);

    printf("Number of elements are : %d\n",iRet);   
  
    DeleteLast(&Head, &Tail);

    Display(Head, Tail);
    iRet = Count(Head, Tail);

    printf("Number of elements are : %d\n",iRet);   

    InsertAtPos(&Head, &Tail, 3,81);

    Display(Head, Tail);
    iRet = Count(Head, Tail);

    printf("Number of elements are : %d\n",iRet);   

    DeleteAtPos(&Head, &Tail,3);

    Display(Head, Tail);
    iRet = Count(Head, Tail);

    printf("Number of elements are : %d\n",iRet);   

    return 0;
}