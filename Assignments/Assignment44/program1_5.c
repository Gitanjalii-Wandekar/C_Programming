//Count Frequency of the given number

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

int DisplayEven(PPNODE first)
{
    int count = 0;

    while(*first != NULL)
    {
        if(((*first)->data % 2) != 0)
        {
            printf("%d", (*first)->data);
        }
        (*first) = (*first)->next;
    }
    printf("\n");
}
int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);
    InsertFirst(&head, 10);
    InsertFirst(&head, 51);

    printf("Even Count : %d\n", DisplayEven(&head));

    return 0;
}


