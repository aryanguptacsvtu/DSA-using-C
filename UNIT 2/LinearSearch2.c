# include<stdio.h>

int linear_search(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;  // Return the index if target is found.
        }
    }
    return -1;         // Return -1 if target is not found.
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);      // Calculating the size of the array.
    
    int target = 30;
    int result = linear_search(arr, n, target);
    if (result != -1)
    {
        printf("Element found at index: %d\n", result);
    }
    else
    {
        printf("Element not found.\n");
    }
    return 0;
}
