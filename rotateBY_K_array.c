#include <stdio.h>
void rev(int arr[], int a, int b)
{
    for (int i = a, j = b; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
void rever(int arr[], int a, int b)
{
    for (int i = a, j = b; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
void reverse(int x, int arr[], int a, int b, int k)
{
    for (int i = a, j = b; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    rever(arr, 0, k - 1);
    rev(arr, k, x - 1);
    return;
}
int main()
{
    int x;
    printf("Enter the size of array = ");
    scanf("%d", &x);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        printf("Enter the %d element = ", i + 1);
        scanf("%d", &arr[i]);
    }
    int k;
    printf("How many elements you want to rotate = ");
    scanf("%d", &k);
    k = k % x;
    reverse(x, arr, 0, x - 1, k);
    for (int i = 0; i < x; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}