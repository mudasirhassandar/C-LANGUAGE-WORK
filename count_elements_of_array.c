// count the numbers of elements in given array?

#include <stdio.h>
int main()
{
    
    int x;
    printf("Enter size of your array  : ");
    scanf("%d", &x);
    int arr[x];
    int count = 0;

    for (int i = 0; i < x; i++)
    {
        printf("Enter element number %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("number of elements in your array  = ");
    for (int i = 0; i < x; i++)
    {
        count++;
    }
    printf("%d ", count);
    return 0;
}