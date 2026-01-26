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
            printf("Enter %d elements of %d row = ", j + 1, i + 1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("Your 2D array is :-\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int minr = 0;
    int maxr = x - 1;
    int minc = 0;
    int maxc = y - 1;
    int totalele = x * y;
    int count = 0;
    while (count < totalele)
    {
        for (int j = minc; j <= maxc; j++)
        {
            printf("%d ", arr[minr][j]);

            count++;
        }
        minr++;
        if (count >= totalele)
            break;
        for (int i = minr; i <= maxr; i++)
        {
            printf("%d ", arr[i][maxc]);

            count++;
        }
        maxc--;
        if (count >= totalele)
            break;
        for (int j = maxc; j >= minc; j--)
        {
            printf("%d ", arr[maxr][j]);

            count++;
        }
        maxr--;
        if (count >= totalele)
            break;
        for (int i = maxr; i >= minr; i--)
        {
            printf("%d ", arr[i][minc]);
            if (count >= totalele)
                break;

            count++;
        }
        minc++;
    }
    return 0;
}