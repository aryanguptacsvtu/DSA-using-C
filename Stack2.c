// ** Implementing Stack using array and performing Operations**

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if ((ptr->top == -1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if ((ptr->top == ptr->size - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow!! Cannot push %d to the stack.\n",val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow!! Cannot pop from the stack.");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *sp, int i)
{
    int arrInd = sp->top - i + 1;
    if (arrInd < 0)
    {
        printf("Not a valid position for the stack.");
        return -1;
    }
    else
    {
        return sp->arr[arrInd];
    }
}

int stackTop(struct stack* sp)
{
    return sp->arr[sp->top];
}

int stackBottom(struct stack* sp)
{
    return sp->arr[0];
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));

    sp->size = 50;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully!!\n");

    printf("Before pushing, Full: %d\n", isFull(sp));
    printf("Before pushing, Empty: %d\n\n", isEmpty(sp));

    push(sp, 50);
    push(sp, 88);
    push(sp, 23);
    push(sp, 44);
    push(sp, 100);
    push(sp, 110);

    printf("After pushing, Full: %d\n", isFull(sp));
    printf("After pushing, Empty: %d\n\n", isEmpty(sp));

    printf("Popped %d from the stack.\n", pop(sp));
    printf("Popped %d from the stack.\n\n", pop(sp));

    printf("The top most value of this stack is:%d\n",stackTop(sp));
    printf("The bottom most value of this stack is:%d\n\n",stackBottom(sp));

    // Printing values from the stack
    for (int j = 1; j <= sp->top + 1; j++)
    {
        printf("The value at position %d is %d.\n", j, peek(sp, j));
    }

    return 0;
}