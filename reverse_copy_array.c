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
// METHOD 2;
// WAP to pint reverse of array without using another array?

#include <stdio.h>
void fun(int x, int arr[])
{
    int i = 0;
    int j = x - 1;
    while (i < j)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    return;
}
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
    fun(x, arr);
    for (int i = 0; i < x; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

