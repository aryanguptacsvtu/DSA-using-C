// ** Insertion in a Linked List **

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

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

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

    head->data = 11;
    head->next = second;

    second->data = 65;
    second->next = third;

    third->data = 88;
    third->next = fourth;

    fourth->data = 55;
    fourth->next = NULL;

    printf("Linked List before Insertion:-\n");
    linkedListTraversal(head);

    int choice;

    printf("\nMenu:-");
    printf("\n1. Insert at Beginning of list.\n");
    printf("2. Insert at End of list.\n");
    printf("3. Insert after a specific Node.\n");
    printf("4. Insert at specific Index. ");

    printf("\nEnter your choice:-");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        head = insertAtFirst(head, 100);
        break;
    case 2:
        head = insertAtEnd(head, 300);
        break;
    case 3:
        head = insertAfterNode(head, third, 500);
        break;
    case 4:
        head = insertAtIndex(head, 200, 1);
        break;
    default:
        printf("Invalid Choice!");
        break;
    }

    printf("\nLinked List after Insertion:-\n");
    linkedListTraversal(head);

    return 0;
}