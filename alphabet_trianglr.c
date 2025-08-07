//     A
//   A B
// A B C

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
            int z = 1;
            for (int k = 1; k <= i; k++)
            {   
                int b = z + 64;
                printf("%c",b);
                z++;
            }

            printf("\n");
        }
    return 0;
}