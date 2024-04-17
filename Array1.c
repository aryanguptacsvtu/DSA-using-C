#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct Array *a, int tSize, int uSize)
{
    //(*a).total_size = tSize;
    //(*a).used_size = uSize;
    //(*a).ptr =(int *)malloc(tSize *sizeof(int));

    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void show(struct Array *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

void setVal(struct Array *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d :", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}
int main()
{
    struct Array marks;
    createArray(&marks, 10, 3);
    printf("We are running setVal now.\n");
    setVal(&marks);

    printf("We are running show now.\n");
    show(&marks);

    return 0;
}