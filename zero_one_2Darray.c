// Given a matrix having elements only 0 and 1 . find the row with maximun number of ones

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
    printf("\n");
    printf("Enter elements eithr 0 or 1\n");
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
        int count = 0;
        for (int j = 0; j < y; j++)
        {
            if (arr[i][j] == 1)
                count++;
        }
        printf("number of ones in %d row = %d\n", i + 1, count);
        if (count > max)
        {
            max = count;
            maxrow = i + 1;
        }
    }
    printf("Maximun number of ones = %d in row number %d", max, maxrow);

    return 0;
}