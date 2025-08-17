#include <stdio.h>
int main()
{
    int x;
    printf("Enter size of your array  : ");
    scanf("%d", &x);
    int arr[x];

    int product = 1;
    for (int i = 0; i < x; i++)
    {
        printf("Enter element number %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("sun of your elements  =  ");
    for (int i = 0; i < x; i++)
    {
        product = product * arr[i];
    }
    printf("%d ", product);

    return 0;
}