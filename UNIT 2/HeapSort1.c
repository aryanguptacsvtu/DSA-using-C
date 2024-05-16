#include <stdio.h>

// Function to swap the position of two elements in an array
void swap(int *a, int *b)
{
    int tempvar = *a;
    *a = *b;
    *b = tempvar;
}

void heapify(int arr[], int n, int i)
{
    // Finding the greatest among root, leftSide child, and rightSide child of the tree
    int greatest = i;
    int leftSide = 2 * i + 1;
    int rightSide = 2 * i + 2;

    if (leftSide < n && arr[leftSide] > arr[greatest])
    {
        greatest = leftSide;
    }

    if (rightSide < n && arr[rightSide] > arr[greatest])
    {
        greatest = rightSide;
    }

    // Swap and continue heapifying if the root is not the greatest
    if (greatest != i)
    {
        swap(&arr[i], &arr[greatest]);
        heapify(arr, n, greatest);
    }
}

// Main function
void heapSort(int arr[], int n)
{
    // Build max heap
    for (int i = n/2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);

        heapify(arr, i, 0);
    }
}

// Printing the array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 12, 9, 5, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array is \n");
    printArray(arr, n);

    heapSort(arr, n);

    printf("\nSorted array is \n");
    printArray(arr, n);
}