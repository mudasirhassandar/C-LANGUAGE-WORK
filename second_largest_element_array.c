// find the second largest element in the given array?

#include <stdio.h>
#include <limits.h>
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
    printf("secound Maximum value of elements in your array   =  ");
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < x; i++)
    {
        if (max < arr[i])
            max = arr[i];
        else
            max = max;
    }
    for (int i = 0; i < x; i++)
    {
        if (arr[i] != max && smax < arr[i])
            smax = arr[i];
        else
            max = max;
    }
    printf("%d ", smax);

    return 0;
}

// Method Two.
#include <stdio.h>
#include <limits.h>
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
    printf("secound Maximum value of elements in your array   =  ");
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < x; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if (smax < arr[i] && arr[i] != max)
        {
            smax = arr[i];
        }
        else
            smax = smax;
    }

    printf("%d ", smax);

    return 0;
}