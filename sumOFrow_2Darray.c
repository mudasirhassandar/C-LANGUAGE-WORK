// WAP to print the rowbnumber having the maximum sum in a given matrix?

#include <stdio.h>
#include <limits.h>
int main()
{
    int x;
    printf("Enter number of rows =  ");
    scanf("%d", &x);
    int y;
    printf("Enter number of colums =  ");
    scanf("%d", &y);
    int arr[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter %d elements of %d row = ", j + 1, i + 1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("Your 2D array is :-");
    printf("\n");
    int max = INT_MIN;
    int maxrow;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < x; i++)
    {
        int sum = 0;
        for (int j = 0; j < y; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("sum of %d row = %d\n", i + 1, sum);
        if (sum > max)
        {
            max = sum;
            maxrow = i + 1;
        }
    }
    printf("Maximun sum = %d and row number is = %d", max, maxrow);

    return 0;
}