// Taking input of a string using loop.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of characters: ");
    scanf("%d", &n);

    char str[n + 1]; // +1 for null terminator
    printf("Enter characters one by one:\n");

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &str[i]); // space before %c avoids newline issues
    }

    str[n] = '\0'; // end string with null character

    printf("Your string is: %s\n", str);

    return 0;
}
