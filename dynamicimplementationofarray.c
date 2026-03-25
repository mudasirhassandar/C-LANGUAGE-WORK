#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size of array = ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element = ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Entered Array\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
