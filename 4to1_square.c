// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
// in this question n=4.

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows : ");
    scanf("%d", &n);
    int min = 0;
    int row = 2 * n - 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            int a = i;
            if (i > n)
                a = n * 2 - i;
            int b = j;
            if (j > n)
                b = n * 2 - j;
            if (a < b)
                min = a;
            else
                min = b;
            printf("%d",n+1-min);
        }
        printf("\n");
    }

    return 0;
}
