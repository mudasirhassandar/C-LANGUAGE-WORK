// find the minmum value of all the elements in the array?

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
    printf("Minmum value of elements in your array   =  ");
    int min = INT_MAX;
    for (int i = 0; i < x; i++)
    {
        if (min > arr[i])
            min = arr[i];
        else
            min = min;
    }
    printf("%d ", min);

    return 0;
}