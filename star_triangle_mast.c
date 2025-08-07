//     *
//   * *
// * * *

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
       
        {  int a = n - i;    
            for (int j = 1; j <= a; j++)
            {
                printf("  ");
            }
            for (int k = 1; k <= i; k++)
            {
                printf("* ");
            }

            printf("\n");
        }
    return 0;
}