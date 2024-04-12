#include <stdio.h>
// Function to calculate the length of a string
int stringLength(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
// Function to concatenate two strings
void stringConcatenate(char str1[], char str2[])
{
    int i, j;
    i = stringLength(str1);
    for (j = 0; str2[j] != '\0'; i++, j++)
    {
        str1[i] = str2[j];
    }
    str1[i] = '\0';
}
// Function to copy a string
void stringCopy(char source[], char destination[])
{
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}
// Function to check if a string is a palindrome
int isPalindrome(char str[])
{
    int i, j;
    i = 0;
    j = stringLength(str) - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return 0; // Not a palindrome
        }
        i++;
        j--;
    }
    return 1; // Palindrome
}
// Function to reverse a string
void reverseString(char str[])
{
    int i, j;
    char temp;
    j = stringLength(str) - 1;
    for (i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
// Function to compare two strings
int compareStrings(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            return 0; // Both strings are equal
        }
        i++;
    }
    return str1[i] - str2[i]; // Return the difference of ASCII values
}
// Function to extract a substring from a string
void substring(char str[], int start, int length, char result[])
{
    int i, j;
    for (i = start, j = 0; j < length; i++, j++)
    {
        result[j] = str[i];
    }
    result[j] = '\0';
}
int main()
{
    char str1[100], str2[100], result[100];
    int choice, length, start;

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    printf("Menu:\n");
    printf("1. Calculate Length\n");
    printf("2. Concatenate Strings\n");
    printf("3. Copy String\n");
    printf("4. Check Palindrome\n");
    printf("5. Reverse String\n");
    printf("6. Compare Strings\n");
    printf("7. Extract Substring\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        length = stringLength(str1);
        printf("Length of string 1: %d\n", length);
        length = stringLength(str2);
        printf("Length of string 2: %d\n", length);
        break;

    case 2:
        stringConcatenate(str1, str2);
        printf("Concatenated string: %s\n", str1);
        break;

    case 3:
        stringCopy(str1, result);
        printf("Copied string: %s\n", result);
        break;

    case 4:
        if (isPalindrome(str1))
            printf("String 1 is a palindrome.\n");
        else
            printf("String 1 is not a palindrome.\n");
        if (isPalindrome(str2))
            printf("String 2 is a palindrome.\n");
        else
            printf("String 2 is not a palindrome.\n");
        break;

    case 5:
        reverseString(str1);
        printf("Reversed string 1: %s\n", str1);
        reverseString(str2);
        printf("Reversed string 2: %s\n", str2);
        break;

    case 6:
        if (compareStrings(str1, str2) == 0)
            printf("Strings are equal.\n");
        else
            printf("Strings are not equal.\n");
        break;

    case 7:
        printf("Enter the starting index: ");
        scanf("%d", &start);
        printf("Enter the length of substring: ");
        scanf("%d", &length);
        substring(str1, start, length, result);
        printf("Substring: %s\n", result);
        break;

    default:
        printf("Invalid choice!\n");
    }
    return 0;
}
