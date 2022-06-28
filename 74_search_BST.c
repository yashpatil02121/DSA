#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void inOrder(struct node* root){
    if (root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

int isBST(struct node* root){
    static struct node*prev = NULL;
    if (root!=NULL)
    {
        if (!isBST(root->left))
            return 0;
        if (prev!=NULL && root->data <= prev->data)
            return 0;
        prev = root;
        return isBST(root->right);
    }
    else
        return 1;
}

struct node* Search(struct node* root, int key)
{
    if (root==NULL)
        return NULL;
    if(root->data == key)
        return root;
    else if(root->data>key)
        return Search(root->left,key);
    else
        return Search(root->right,key); 
}


int main(int argc, char *argv[])
{
    struct node *p=createNode(5);
    struct node *p1=createNode(3);
    struct node *p2=createNode(6);
    struct node *p3=createNode(1);
    struct node *p4=createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // inOrder(p);
    // printf("  :  %d",isBST(p));
    // Search(p,7);
    // printf("\n%d",Search(p,6));

    struct node* n = Search(p,6);
    if (n!=NULL)
    {
        printf("Found :>> %d\n",n->data);
    }
    else{
        printf("Element not Found");
    }

    return 0;
}