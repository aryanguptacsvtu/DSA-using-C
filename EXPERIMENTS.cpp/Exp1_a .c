// Copying a string without using string functions.

#include <stdio.h>

int main()
{
    char src[] = "hello";
    char dest[100];
    int i;

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';     // Null terminator assignment after the loop.

    printf("Copied string: %s\n", dest);

    return 0;
}
