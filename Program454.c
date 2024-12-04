#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rclild;
}

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Insert(PPNODE Root, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->lchild = NULL;
    newn->rclild = NULL;

    PNODE temp = *Root;

    if(*Root == NULL)
    {
        *Root = newn;
    }
    else
    {
        while(1)
        {
            if(No > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(No < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
            else if(No == temp->data)
            {
                free(newn);
                printf("Duplicate element not allowed");
                break;
            }
        }
    }
}

void Inorder(PNODE Root)
{
    if(Root != NULL)
    {
        Inorder(Root->lchild);
        printf("%d",Root->data);
        Inorder(Root->rchild);
    }
}

void Preorder(PNODE Root)
{
    if(Root != NULL)
    {
        printf("%d",Root->data);
        Preorder(Root->lchild);
        Preorder(Root->rchild);
    }
}

void Posorder(PNODE Root)
{
    if(Root != NULL)
    {
        Posorder(Root->lchild);
        Posorder(Root->rchild);
        printf("%d",Root->data);
    }
}

int main()
{

    PNODE Head = NULL;

    Insert(&Head,11);
    Insert(&Head,7);
    Insert(&Head,21);
    
    printf("\n Data using preorder traversal\n");
    Preorder(Head);

    printf("\n Data using posorder traversal\n");
    posorder(Head);

    printf("\n Data using Inorder traversal\n");
    Inorder(Head);
    return 0;
}
