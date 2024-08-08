// ** Creating  a Tree **

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));

    n->info = data;
    n->left = NULL;
    n->right = NULL;

    return n;
}

int main()
{
    struct Node *p = createNode(10);    // Root Node
    
    struct Node *p1 = createNode(5);
    struct Node *p2 = createNode(8);

    p->left = p1;
    p->right = p2;

    return 0;
}