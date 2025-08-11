// * * * * * * *
// * * *   * * *
// * *       * *
// *           *

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows : ");
    scanf("%d", &n);
    int fl = (2 * n) + 1;
    int star = n;
    int space = 1;
    for (int l = 1; l <= fl; l++)
    {
        printf("* ");
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= star; j++)
        {
            printf("* ");
        }
        for (int k = 1; k <= space; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("* ");
        }

        star--;
        space += 2;
        printf("\n");
    }
    return 0;
}