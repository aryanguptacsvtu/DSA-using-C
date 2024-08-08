// ** Implementing Stack using linked list and performing Operations **

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int x)
{
    if (isFull(top))
    {
        printf("Satck Overflow!!");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node **top)
{
    if (isEmpty(*top))
    {
        printf("Satck Underflow!!");
    }
    else
    {
        struct Node *n = *top;
        *top = (*top)->next;

        int x = n->data;
        free(n);
        return x;
    }
}

int peek(struct Node *top, int pos)
{
    struct Node *ptr = top;

    for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}

int main()
{
    struct Node *top = NULL;

    top = push(top, 70);
    top = push(top, 33);
    top = push(top, 100);
    top = push(top, 21);
    linkedListTraversal(top);

    int element = pop(&top);
    printf("\nPopped element is %d\n", element);

    linkedListTraversal(top);

    for (int j = 1; j < 4; j++)
    {
      printf("Value at position %d is %d\n",j,peek(top,j));
    }
    
    return 0;
}