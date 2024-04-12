#include <stdio.h>

int Search(int a[], int target, int n, int low, int high)
{
    for (int i = 0; i < n; i++)
    {
        int mid = (low + high) / 2;
        if (a[mid] == target)
        {
            return mid;
        }
        else if (a[mid] > target)
        {
            high = mid - 1;
        }
        else if (a[mid] < target)
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(a) / sizeof(a[0]);

    int low = 1;         // low=a[0] , high=a[7] is also valid.
    int high = 8;

    int target;
    printf("Enter the element to search : ");
    scanf("%d", &target);

    int result = Search(a, target, n, low, high);

    if (result != -1)
    {
        printf("Element found at index %d", result);
    }
    else
    {
        printf("Element not found.");
    }
    return 0;
}
