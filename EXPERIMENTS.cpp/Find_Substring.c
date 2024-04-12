// Finding occurene of Sub-string using library functions.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "hello world";
    char str2[] = "world";
    char *result = strstr(str1, str2);

    if (result != NULL)
    {
        printf("Sub-string found at index: %ld\n", result - str1);
    }
    else
    {
        printf("Sub-string not found.\n");
    }
    return 0;
}