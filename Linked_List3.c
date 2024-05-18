// ** Deletion in a Linked List **

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

struct Node *DeleteFirst(struct Node *head)
{
    struct Node *ptr = head;

    head = head->next;
    free(ptr);
    return head;
}

struct Node *DeleteAtEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);

    return head;
}

struct Node *DeleteAtValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }

    return head;
}

struct Node *DeleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);

    return head;
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
    head->next = second;

    second->data = 60;
    second->next = third;

    third->data = 800;
    third->next = fourth;

    fourth->data = 555;
    fourth->next = NULL;

    printf("Linked List before Deletion:-\n");
    linkedListTraversal(head);

    int choice;

    printf("\nMenu:-");
    printf("\n1. Delete first node of list.\n");
    printf("2. Delete last node of list.\n");
    printf("3. Delete node with a given value.\n");
    printf("4. Delete node at specific Index.\n");

    printf("\nEnter your choice:-");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        head = DeleteFirst(head);
        break;
    case 2:
        head = DeleteAtEnd(head);
        break;
    case 3:
        head = DeleteAtValue(head, 60);
        break;
    case 4:
        head = DeleteAtIndex(head, 2);
        break;
    default:
        printf("Invalid Choice!");
        break;
    }

    printf("\nLinked List after Deletion:-\n");
    linkedListTraversal(head);

    return 0;
}