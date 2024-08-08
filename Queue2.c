// ** Implementing Queue using linked list and performing Operations **

#include <stdio.h>
#include <stdlib.h>

struct Node *front = NULL;
struct Node *rear = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of the Queue:\n");
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));

    if (n == NULL)
    {
        printf("OVERFLOW!!");
    }
    else
    {
        n->data = val;
        n->next = NULL;

        if (front == NULL)
        {
            front = rear = n;
        }
        else
        {
            rear->next = n;
            rear = n;
        }
    }
}

int dequeue()
{
    int val = -1;
    struct Node *p = front;

    if (front == NULL)
    {
        printf("UNDERFLOW!!");
    }
    else
    {
        front = front->next;
        val = p->data;
        free(p);
    }
    return val;
}

int main()
{
    enqueue(30);
    enqueue(1000);
    enqueue(444);
    enqueue(2);
    enqueue(11);
    linkedListTraversal(front);

    printf("\nDequeuing element %d from Queue.\n",dequeue());
    printf("Dequeuing element %d from Queue.\n",dequeue());
    linkedListTraversal(front);

    return 0;
}