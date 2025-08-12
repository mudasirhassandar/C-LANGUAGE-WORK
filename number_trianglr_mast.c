//  1 2 3 4 3 2 1
//  1 2 3   3 2 1
//  1 2       2 1
//  1           1

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows : ");
    scanf("%d", &n);
    int number = n;
    int space = 1;
    int mn = n + 1;

    for (int i = 1; i < mn; i++)
    {
        printf("%d", i);
    }
    for (int i = mn; i >= 1; i--)
    {
        printf("%d", i);
    }
    printf("\n");

    for (int l = 1; l <= n; l++)
    {
        for (int j = 1; j <= number; j++)
        {
            printf("%d", j);
        }
        for (int s = 1; s <= space; s++)
        {
            printf(" ");
        }
        for (int j = number; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        space += 2;
        number--;
    }

    return 0;
}