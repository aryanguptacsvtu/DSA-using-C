// ** Searching in a BST **

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

struct Node *search(struct Node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->info)
        {
            return root;
        }
        else if (key < root->info)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
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

    struct Node *n = search(p, 6);

    if (n != NULL)
    {
        printf("Found:%d", n->info);
    }
    else
    {
        printf("Element not found.");
    }

    return 0;
}