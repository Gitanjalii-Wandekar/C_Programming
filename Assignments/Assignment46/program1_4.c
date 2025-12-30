//Replace negative numbers with zero

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)  // LL is empty
    {
        *first = newn;
    }
    else                // LL contains atleast 1 node
    {
        newn->next = (*first);
        (*first) = newn;
    }

}

void ReplaceNegative(PPNODE first)
{
    PNODE temp = *first;
    while (temp != NULL)
    {
        if(temp->data < 0)
        {
            temp->data = 0;
        }
        temp = temp->next;
    }
    
}
void Display(PPNODE first)
{
    while(*first != NULL)
    {
        printf("%d ->", (*first)->data);
        *first = (*first)->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);
    InsertFirst(&head, 10);
    InsertFirst(&head, -11);

    ReplaceNegative(&head);
    printf("After Replacing the negative  elements:\n");
    Display(&head);

    return 0;
}