#include <stdio.h>
int main()
{
    int n, i, l, h, mid, key;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements in the sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to search:");
    scanf("%d", &key);
    l = 0;
    h = n - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == array[mid])
        {
            printf("%d found at the location(index) %d", key, mid);
            break;
        }
        else if (key < array[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if (l > h)
    {
        printf("The element is not found.");
    }
    return 0;
}
