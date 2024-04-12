// Concatenating strings without using library functions.

#include <stdio.h>
int main()
{
    char first[] = "hello";
    char second[] = "world";
    char concatenated[100];
    int i, j;

    for (i = 0; first[i] != '\0'; i++)
    {
        concatenated[i] = first[i];
    }
    for (j = 0; second[j] != '\0'; j++, i++)
    {
        concatenated[i] = second[j];
    }

    concatenated[i] = '\0';
    printf("Concatenated String:%s", concatenated);

    return 0;
}
