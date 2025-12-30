//Increment each node value by 1

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

void IncrementAll(PPNODE first)
{
    PNODE temp = *first;

    while(temp != NULL)
    {
        temp->data = temp->data + 1;
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
    InsertFirst(&head, 51);

    IncrementAll(&head);
    printf("After incrementing all elements:\n");
    Display(&head);

    return 0;
}