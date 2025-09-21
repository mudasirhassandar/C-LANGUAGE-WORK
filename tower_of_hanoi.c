#include <stdio.h>
void tower(int n, char s, char h, char d)
{
    if (n == 0)
        return;
    tower(n - 1, s, d, h);
    printf("Move disk %d from %c -> %c\n", n, s, d);
    tower(n - 1, h, s, d);
    return;
}
int main()
{
    int n;
    printf("Enter the number of disks = ");
    scanf("%d", &n);
    tower(n, 'A', 'B', 'C');
    return 0;
}