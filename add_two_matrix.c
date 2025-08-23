//addiotion of two matrices?
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
    int brr[x][y];
    int add[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter %d elements of  row %d of matrix frist\n", j + 1, i + 1);
            scanf("%d,", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter %d elements of  row %d of matrix second\n", j + 1, i + 1);
            scanf("%d,", &brr[i][j]);
        }
    }

    printf("Your Matrices are :-");
    printf("\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Addition of matrices:-");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            add[i][j] = arr[i][j] + brr[i][j];
        }
        printf("\n");
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }

    return 0;
}