// WAP to change the given n*n matrix into transpose without using another matrix?

#include <stdio.h>
int main()
{
    int x;
    printf("Enter number of rows/columns =  ");
    scanf("%d", &x);

    int arr[x][x];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("Enter %d elements of %d rowv = ", j + 1, i + 1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("Your 2D array is :-");
    printf("\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (int i = 0; i <= x; i++)
    {
        int k = x - 1;
        int j = 0;
        while (j < k)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    printf("\n");
    printf("Rotated  matrix:-\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}