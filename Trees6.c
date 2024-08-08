// ** Deletion in a BST **

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

void InOrder(struct Node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        printf("%d ", root->info);
        InOrder(root->right);
    }
}

struct Node *inOrderPredecessor(struct Node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct Node *delete(struct Node *root, int value)
{
    struct Node *iPre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }

    if (value < root->info)
    {
        root->left = delete (root->left, value);
    }
    else if (value > root->info)
    {
        root->right = delete (root->right, value);
    }
    else
    {
        iPre = inOrderPredecessor(root);
        root->info = iPre->info;
        root->left = delete (root->left, iPre->info);
    }
    return root;
}

int main()
{
    struct Node *p = createNode(5); // Root Node

    struct Node *p1 = createNode(3);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(1);
    struct Node *p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("Inorder traversal before deletion:");
    InOrder(p);
    delete (p, 3);

    printf("\nInorder traversal after deletion:");
    InOrder(p);
    return 0;
}