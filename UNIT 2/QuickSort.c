#include <stdio.h>

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}


int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } 
    while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}


void quickSort(int A[], int low, int high)
{
    int partitionIndex;   // Index of pivot after partition.

    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);
        quickSort(A, partitionIndex + 1, high);
    }
}


int main()
{
    int A[] = {23, 3, 6, 45, 88 ,13};
    int n = sizeof(A) / sizeof(A[0]);

    printf("Unsorted Array:");
    print(A, n);

    quickSort(A, 0, n - 1);
    printf("\nSorted Array:");
    print(A, n);
    return 0;
}