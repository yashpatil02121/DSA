#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};

void linkedlistTraversal(struct Node*head)
{
    struct Node*ptr=head;
    do
    {
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
    }
    while(ptr!=head);
}

struct Node* insertAtFirst(struct Node*head, int data)
{
    struct Node* ptr= (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;    
    struct Node*p=head->next;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    
    return head;
}


int main (int argc, char *argv[]) {
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

    third->data=6;
    third->next=fourth;

    fourth->data=1;
    fourth->next=NULL;
    linkedlistTraversal(head);
    head=insertAtFirst(head,54);
    linkedlistTraversal(head);
   return 0;
}