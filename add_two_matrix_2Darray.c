// addition of two matrix
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number of rows/columns = ");
    scanf("%d", &x);
    int y = x;
    int arr[x][y];
    int brr[x][y];
    printf("Enter first matrix :-\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("enter the %d element of %d row = ", j + 1, i + 1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Enter second matrix :-\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("enter the %d element of %d row = ", j + 1, i + 1);
            scanf("%d", &brr[i][j]);
        }
        printf("\n");
    }
    printf("first matrix :-\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("second matrix :-\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Addition of two Matrices:-\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            int add = arr[i][j] + brr[i][j];
            printf("%d ", add);
        }
        printf("\n");
    }
    return 0;
}