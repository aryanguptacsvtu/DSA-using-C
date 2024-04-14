#include <stdio.h>
int main()
{
    int a[] = {1, 223, 34, 45, 66, 5};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n - 1; i++)        // Loop for Passes.
    {
        for (int j = 0; j < n - 1 - i; j++) // Loop for each pass.
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}