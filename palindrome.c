#include <stdio.h>
int main()
{
    int x;
    printf("Enter the size of araay = ");
    scanf("%d", &x);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        printf("Enter the %d element of array = ", i + 1);
        scanf("%d", &arr[i]);
    }
    int ispalindromr = 1;
    for (int i = 0; i < x; i++)
    {
        for (int j = x - 1; j >= 0; j--)
        {
            if (arr[i] != arr[x - 1 - i])
            {
                ispalindromr = 0;
                break;
            }
        }
    }
    if (ispalindromr == 1)
        printf("Number is palindrome");
    else
        printf("Number is not palindrome");
    return 0;
}