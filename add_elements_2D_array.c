// sum of all elemenyts of matrices?
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
    int sum = 0;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter %d elements of  row %d\n", j + 1, i + 1);
            scanf("%d,", &arr[i][j]);
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Sum of all the elements = ");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}