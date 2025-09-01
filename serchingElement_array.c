#include <stdio.h>
#include <stdbool.h>
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
    printf("which element you want to find = ");
    scanf("%d", &k);
    bool flag = false;
    int i;
    for (i = 0; i < x; i++)
    {
        if (arr[i] == k)
        {
            flag = true;
            break;
        }
    }
    if (flag == false)
        printf("%d is not present in array", k);
    else
        printf("%d is present in array at index = %d", k, i);

    return 0;
}