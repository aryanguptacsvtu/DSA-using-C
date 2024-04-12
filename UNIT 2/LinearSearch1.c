#include <stdio.h>

void linear_search(int arr[], int n, int t, int i)
{
    if (i < n)
    {
        if (arr[i] == t)
        {
            printf("Element found at index: %d", i);
            return;
        }

        linear_search(arr, n, t, i + 1);
    }
    else
    {
        printf("Element not found.");
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(a) / sizeof(a[0]);
    int target;

    printf("Enter element to search:");
    scanf("%d", &target);

    linear_search(a, n, target, 0);
    return 0;
}
