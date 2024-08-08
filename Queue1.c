// ** Implementing Queue using array and performing Operations **

#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front, rear;
    int *arr;
};

int isFull(struct queue *q)
{
    if (q->rear == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q)
{
    if (q->front == q->rear)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("OVERFLOW!!");
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = val;
    }
}

int dequeue(struct queue *q)
{
    int a =-1;
    if (isEmpty(q))
    {
        printf("UNDERFLOW!!");
    }
    else
    {
        q->front++;
        a = q->arr[q->front];
    }
    return a;
}

int main()
{
    struct queue q;

    q.size = 50;
    q.front = q.rear = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    printf("Queue successfully created!!\n");
    if (isEmpty(&q))
    {
        printf("Queue is empty!!\n");
    }

    if (isFull(&q))
    {
        printf("Queue is full!!\n");
    }

    printf("Inserting elements in Queue.\n");
    enqueue(&q, 20);
    enqueue(&q, 1000); 
    enqueue(&q, 333);
    enqueue(&q, 1);
    enqueue(&q, 78);

    if (isFull(&q))
    {
        printf("Queue is full!!\n");
    }

    printf("Deleting element %d from Queue.\n",dequeue(&q));
    printf("Deleting element %d from Queue.\n",dequeue(&q));
    
    return 0;
}