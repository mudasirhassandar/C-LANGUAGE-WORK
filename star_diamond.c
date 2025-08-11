//          *
//       *  *  *
//    *  *  *  *  *
//       *  *  *
//          *

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows : ");
    scanf("%d", &n);
    int ml = (n / 2) + 1;

    int space = n / 2;
    int star = 1;

    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= space; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("* ");
        }
        if (i < ml)
        {
            star += 2;
            space--;
        }
        else
        {
            space++;
            star -= 2;
        }

        printf("\n");
    }

    return 0;
}