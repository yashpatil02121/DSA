#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};

void linkedlistTravrsal(struct Node*ptr)
{
    while(ptr != NULL)
    {
        printf("element: %d\n",ptr->data );
        ptr= ptr->next;
    }
}

// struct Node*deleteFirst(struct Node * head)
// {
//     struct Node * ptr = head;
//     head = head ->next;
//     free(ptr);
//     return head;
// }

struct Node*deleteFirst(struct Node* head)
{
    struct Node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}


struct Node*deleteAtIndex(struct Node * head,int index)
{
    struct Node*p=head;
    struct Node*q=head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

struct Node*deleteAtLast(struct Node * head)
{
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->next != NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

struct Node*deleteAtNode(struct Node * head,int value )
{
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data == value)
    {
    p->next=q->next;
    free(q);
    }
    return head;
}
int main () {
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data=4;
    head->next=second;

    second->data=3;
    second->next=third;

    third->data=8;
    third->next=fourth;

    fourth->data=1;
    fourth->next=NULL;
    printf("Linked list before deletion\n");
    linkedlistTravrsal(head);

    head=deleteFirst(head);
    printf("Linked list after deletion\n");
    linkedlistTravrsal(head);

    // head=deleteAtIndex(head,2);
    // printf("Linked list after deletion\n");
    // linkedlistTravrsal(head);

    // head=deleteAtLast(head);
    // printf("Linked list after deletion\n");
    // linkedlistTravrsal(head);

    // head=deleteAtNode(head,8);
    // printf("Linked list after deletion\n");
    // linkedlistTravrsal(head);

   return 0;
}