#include <stdio.h>
int factorial(int x)
{
    if (x == 1 || x == 0)
        return 1;
    else
        return x * factorial(x - 1);
}
int combination(int n, int r)
{
    int comb = factorial(n) / (factorial(r) * factorial(n - r));
    return comb;
}
int main()
{
    int n;
    printf("Enter the first number = ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            int icj = combination(i, j);
            printf("%d ", icj);
        }
        printf("\n");
    }
    return 0;
}
