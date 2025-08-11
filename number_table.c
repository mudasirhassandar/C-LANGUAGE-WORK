//  1 2 3 4 5 6 7
//  1 2 3   5 6 7
//  1 2       6 7
//  1           1

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows : ");
    scanf("%d", &n);
    int fl = (2 * n) + 1;
    int number = n;
    int space = 1;
    for (int l = 1; l <= fl; l++)
    {
        
        printf("%d",l);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int a=1;
        for (int j = 1; j <= number; j++)
        {
            printf("%d",a);
            a++;
        }
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
            a++;
        }
        for (int j = 1; j <= number; j++)
        {
            printf("%d",a);
            a++;
        }
         
         number--;
        space += 2;
        
        printf("\n");
    }
    return 0;
}