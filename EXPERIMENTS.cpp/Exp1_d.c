// Checking for 'Palindrome'(string is same when read forward & backward) without using string functions.

#include <stdio.h>
int main()
{
    char str[] = "radar";
    int length;
    int isPalindrome = 1;

    for (length = 0; str[length] != '\0'; length++)
    {                   // Finding the length of string.
    }
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome == 1)
    {
        printf("The string is a Palindrome.\n");
    }
    else
    {
        printf("The string is not a Palindrome.");
    }

    return 0;
}
