// find the maximum value of all the elements in the array?

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
    printf("Maximum value of elements in your array   =  ");
    int max = INT_MIN;
    for (int i = 0; i < x; i++)
    {
        if (max < arr[i])
            max = arr[i];
        else
            max = max;
    }
    printf("%d ", max);

    return 0;
}