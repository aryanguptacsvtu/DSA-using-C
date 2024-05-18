// ** Creation and Traversal of Linked List **

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

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocating memory for the nodes in the linked list in the Heap.

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));


    head->data = 11;
    head->next = second;    // Link first and second Node.

    second->data = 65;
    second->next = third;   // Link second and third Node.

    third->data = 88;
    third->next = NULL;     // Terminate the list at third Node.

    linkedListTraversal(head);

    return 0;
}