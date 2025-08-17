#include <stdio.h>
int main()
{
    int x;
    printf("Enter size of your array  : ");
    scanf("%d", &x);
    int arr[x];
    
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        printf("Enter element number %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("sun of your elements  =  ");
    for (int i = 0; i < x; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d ", sum);

    return 0;
}