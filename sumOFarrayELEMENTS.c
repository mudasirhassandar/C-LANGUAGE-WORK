// find the difference between the sum of elements at even indices to the sum of elements at odd indices?

#include <stdio.h>
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
    int ei = 0; // elements at even indices.
    int oi = 0; // elements at even indices.
    int diff;
    for (int i = 0; i < x; i++)
    {
        if (i % 2 == 0)
            ei += arr[i];
        else
            oi += arr[i];
    }
     diff = ei - oi;
    printf("Difference = %d", diff);

    return 0;
}