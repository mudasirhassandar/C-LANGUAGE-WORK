// WAP to copy elements of array to another array in reverse order?

#include <stdio.h>
int main()
{
    int x;
    printf("Enter size of your array  : ");
    scanf("%d", &x);
    int arr[x];
    int brr[x];

    for (int i = 0; i < x; i++)
    {
        printf("Enter element number %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Your entered array = ");
    for (int i = 0; i < x; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    printf("Your Reversed Array = ");

    for (int i = 0; i < x; i++)
    {
        brr[i] = arr[x - 1 - i];
    }

    for (int i = 0; i < x; i++)
    {

        printf("%d, ", brr[i]);
    }

    return 0;
}