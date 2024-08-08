// * Tree Traversals **

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

void PreOrder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->info);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

void PostOrder(struct Node *root)
{
    if (root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ", root->info);
    }
}

void InOrder(struct Node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        printf("%d ", root->info);
        InOrder(root->right);
    }
}

int main()
{
    struct Node *p = createNode(4); // Root Node

    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(5);
    struct Node *p4 = createNode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("Pre Order Traversal:");
    PreOrder(p);

    printf("\nPost Order Traversal:");
    PostOrder(p);

    printf("\nIn Order Traversal:");
    InOrder(p);
    return 0;
}