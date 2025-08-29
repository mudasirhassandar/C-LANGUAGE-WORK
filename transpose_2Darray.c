// WAP to print the transpose of the matrix .
// Transpose-> change rows into columns and columns into rows.

#include <stdio.h>
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
            printf("Enter %d elements of %d row\n", j + 1, i + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Your 2D array is :-");
    printf("\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix:-\n");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}