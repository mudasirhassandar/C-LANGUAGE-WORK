//        A
//      A B C
//    A B C D E

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows : ");
    scanf("%d", &n);
    int a = 0;
    int b;

    for (int i = 1; i <= n; i++)

    {
        for (int k = 1; k <= n - i; k++)
        {
            printf("  ");
        }

        for (int j = 1; j <= (i + a); j++)
        {

            b = 64 + j;
            printf("%c ", b);
        }
        a++;

        printf("\n");
    }
    return 0;
}