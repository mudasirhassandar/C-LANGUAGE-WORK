#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter element number %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Your entered array is = ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}