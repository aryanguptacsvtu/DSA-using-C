#include <stdio.h>
void selectionSort(int a[], int n)
{
    int minIndex, temp;
    for (int i = 0; i < n - 1; i++)     // Loop for Passes.
    {
        minIndex = i;
        for (int j = i + 1; j < n; j++) // Loop for each pass.
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[] = {12, 45, 23, 2, 8};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Unsorted Array:");
    print(a, n);

    selectionSort(a, n);

    printf("\nSorted Array:");
    print(a, n);

    return 0;
}
