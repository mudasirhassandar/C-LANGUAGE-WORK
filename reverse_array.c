#include <stdio.h>
int main()
{
    int x;
    printf("Enter size of your array  : ");
    scanf("%d", &x);
    int arr[x];
    int i;

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
    for (int i = 0, j = x - 1; i < j; i++, j--)
    {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    printf("\n");
    printf("Your reversed array = ");
    for (int i = 0; i < x; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}