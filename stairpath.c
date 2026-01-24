#include <stdio.h>
int stair(int n)
{
    if (n == 1 || n == 2)
        return n;
    return stair(n - 1) + stair(n - 2);
}
int main()
{
    int n;
    printf("Enter the number of stairs = ");
    scanf("%d", &n);
    printf("ways = %d", stair(n));
    return 0;
}