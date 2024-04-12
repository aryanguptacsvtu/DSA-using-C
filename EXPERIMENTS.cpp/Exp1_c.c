// Reversing a string without using library functions.

#include <stdio.h>
int main()
{
    char str[] = "hello";
    char reversed[100];
    int length=0;

    for ( length = 0; str[length] != '\0'; length++)
    {                      // Finding the length of string.
    }
    for (int i = 0; i < length; i++)
    {
        reversed[i] = str[length - 1 - i];
    }

    reversed[length] = '\0';
    printf("Reversed String:%s", reversed);

    return 0;
}