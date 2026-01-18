#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter the number of rows = ");
    scanf("%d", &row);
    printf("Enter the number of columns = ");
    scanf("%d", &column);
    int arr[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter element at(%d,%d) = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nEntered Matrix\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nWave print of Matrix\n");
    for (int i = 0; i < row; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < column; j++)
            {

                printf("%d ", arr[i][j]);
            }
        }
        else
        {

            for (int j = column - 1; j >= 0; j--)
            {
                printf("%d ", arr[i][j]);
            }
        }

        printf("\n");
    }
    return 0;
}