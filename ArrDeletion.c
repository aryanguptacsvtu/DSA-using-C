#include <stdio.h>

void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int Deletion(int arr[], int size, int index)
{

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {23, 43, 32, 12, 66};
    int size = 5, index = 3;

    printf("Array before deletion:");
    display(arr, size);

    Deletion(arr, size, index);
    size -= 1;

    printf("Array after deletion:");
    display(arr, size);

    return 0;
}
