// String Operations using library functions.

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50];
    char str2[50];
    int choice;
    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    printf("Menu:\n");
    printf("1. Calculate Length\n");
    printf("2. Concatenate Strings\n");
    printf("3. Copy String\n");
    printf("4. Reverse String\n");
    printf("5. Compare Strings\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case (1):
        printf("\nThe length of string 1 is:%d", strlen(str1));
        printf("\nThe length of string 2 is:%d", strlen(str2));
        break;

    case (2):
        printf("\nConcatenated String:%s", strcat(str1, str2));
        break;

    case (3):
        printf("\nCopied String:%s", strcpy(str1, str2));
        break;

    case (4):
        printf("\nReversed String1:%s", strrev(str1));
        printf("\nReversed String2:%s", strrev(str2));
        break;

    case (5):
        if (strcmp(str1, str2) == 0)
        {
            printf("Strings are Equal.");
        }
        else if (strcmp(str1, str2) != 0)
        {
            printf("Strings are Not Equal.");
        }
        break;

    default:
        printf("\nInvalid Choice!!");
        break;
    }

    return 0;
}