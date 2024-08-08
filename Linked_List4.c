// ** Creation and Traversal of Circular Linked List **

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->next;

    } while (ptr != head);
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocating memory for the nodes in the linked list in the Heap.

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 100;
    head->next = second;   // Link first and second Node.

    second->data = 60;
    second->next = third;  // Link second and third Node.

    third->data = 80;
    third->next = fourth;  // Link third and fourth Node.

    fourth->data = 50;
    fourth->next = head;   // Link fourth and first Node.

    linkedListTraversal(head);

    return 0;
}