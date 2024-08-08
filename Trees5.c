// ** Insertion in a BST **

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

void insert(struct Node *root, int key)
{
    struct Node *prev = NULL;

    while (root != NULL)
    {
        prev = root;
        if (key == root->info)
        {
            printf("Cannot insert %d , already in BST.", key);
            return;
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
    struct Node *new = createNode(key);
    if (key < prev->info)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
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

    insert(p, 7);
    printf("Output:%d", p->right->right->info);

    return 0;
}