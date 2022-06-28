#include <stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*prev;
    struct Node*next;
};

void linkedlistTravrsal(struct Node*ptr)
{
    while(ptr != NULL)
    {
        printf("element: %d\n",ptr->data );
        ptr= ptr->next;
    }
}

int main (int argc, char *argv[]) {
    struct Node * N1;
    struct Node * N2;
    struct Node * N3;
    struct Node * N4;

    N1 = (struct Node*)malloc(sizeof(struct Node));
    N2 = (struct Node*)malloc(sizeof(struct Node));
    N3 = (struct Node*)malloc(sizeof(struct Node));
    N4 = (struct Node*)malloc(sizeof(struct Node));

    N1->next=N2;
    N1->data=1;
    
    N1->prev=NULL;

    N2->next=N3;
    N2->data=2;
    N2->prev=N1;

    N3->next=N4;
    N3->data=3;
    N3->prev=N2;

    N4->next=NULL;
    N4->data=4;
    N4->prev=N3;

    linkedlistTravrsal(N1);

   return 0;
}