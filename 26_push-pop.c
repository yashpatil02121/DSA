#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;    
};

int isEmpty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack*ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack*ptr,int val)
{
    if(isFull(ptr))
    {
        printf("Stack overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack*ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack underflow\n");
        return -1;
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main () {
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    printf("Stack has been created successfully\n");

    printf("Before pushing, Full:%d\n",isFull(sp));
    printf("Before pushing, Empty:%d\n",isEmpty(sp));
    push(sp,56);
    push(sp,46);
    push(sp,6);
    push(sp,58);
    push(sp,57);
    push(sp,34);
    push(sp,35);
    push(sp,97);
    push(sp,22);
    push(sp,5);
    push(sp,12);  // stack overflow since the size of stack is 10.....
    printf("After pushing, Full:%d\n",isFull(sp));
    printf("After pushing, Empty:%d\n",isEmpty(sp));

    printf("Popped %d from the stack\n", pop(sp));
    printf("Popped %d from the stack\n", pop(sp));
    printf("Popped %d from the stack\n", pop(sp));
    printf("Popped %d from the stack\n", pop(sp));
    printf("Popped %d from the stack\n", pop(sp));
    printf("Popped %d from the stack\n", pop(sp));
    printf("Popped %d from the stack\n", pop(sp));
    printf("Popped %d from the stack\n", pop(sp));
    printf("Popped %d from the stack\n", pop(sp));
    printf("Popped %d from the stack\n", pop(sp));
    printf("Popped %d from the stack\n", pop(sp));

   return 0;
}