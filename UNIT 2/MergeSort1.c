#include <stdio.h>

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}


void merge(int a[], int mid, int low, int high)
{
    int i, j, k;
    int B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            B[k] = a[i];
            i++;
            k++;
        }
        else
        {
            B[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {

        B[k] = a[i];
        i++;
        k++;
    }
    while (j <= high)
    {

        B[k] = a[j];
        j++;
        k++;
    }
    for (i = low; i <= high; i++)
    {
        a[i] = B[i];
    }
}


void MergeSort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;

        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);

        merge(a, mid, low, high);
    }
}


int main()
{
    int a[] = {234, 56, 23, 6, 5, 88};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Unsorted Array:");
    print(a, n);

    MergeSort(a, 0, n - 1);

    printf("\nSorted Array:");
    print(a, n);
    return 0;
}
