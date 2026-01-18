#include <stdio.h>
void multiplication(int n, int m, int l, int res[n][m], int a[n][l], int b[l][m])
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < l; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void input(int n, int m, int arr[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter the element at (%d,%d) = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void output(int n, int m, int arr[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int row1, column1, row2, column2;

    printf("Enter the numbers of rows of first matrix = ");
    scanf("%d", &row1);

    printf("Enter the numbers of columns of first matrix = ");
    scanf("%d", &column1);

    printf("Enter the numbers of rows of second matrix = ");
    scanf("%d", &row2);

    printf("Enter the numbers of columns of second matrix = ");
    scanf("%d", &column2);
    if (column1 != row2)
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int a[row1][column1];
    int b[row2][column2];
    int res[row1][column2];
    int l = column1;

    printf("\nEnter first matrix\n\n");
    input(row1, column1, a);

    printf("\nEnter second matrix\n\n");
    input(row2, column2, b);

    printf("\nFirst matrix\n");
    output(row1, column1, a);

    printf("\nSecond matrix\n");
    output(row2, column2, b);
    multiplication(row1, column2, l, res, a, b);
    printf("\nMultiplication of matricies..\n");
    output(row1, column2, res);

    return 0;
}
