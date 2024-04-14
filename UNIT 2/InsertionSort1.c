#include <stdio.h>
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void insertionSort(int a[], int n)
{
    int key, j;

    for (int i = 1; i <= n - 1; i++)  // Loop for Passes.
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)  // Loop for each pass.
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    int a[] = {23, 467, 56, 3, 9};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Unsorted Array:");
    print(a, n);

    insertionSort(a, n);
    printf("\nSorted Array:");
    print(a, n);

    return 0;
}
