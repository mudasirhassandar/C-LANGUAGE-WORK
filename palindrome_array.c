#include <stdio.h>
int main()
{
    int x;
    printf("Enter size of your array  : ");
    scanf("%d", &x);
    int arr[x];

    for (int i = 0; i < x; i++)
    {
        printf("Enter element number %d\n", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0, j = x - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            printf("\nNumber is not palindrome😔");
            break;
        }
        else
        {
            printf("\nNumber is palindrome😍");
            break;
        }
    }

    return 0;
}