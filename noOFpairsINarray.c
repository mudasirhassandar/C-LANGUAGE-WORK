// number of pairs in your array? 

#include <stdio.h>
int main()
{
    int x;

    printf("Enter even size of your array  : ");
    scanf("%d", &x);
    if (x % 2 == 0)
    {

        int arr[x];

        int element;
        for (int i = 0; i < x; i++)
        {
            printf("Enter element number %d\n", i + 1);
            scanf("%d", &arr[i]);
        }
        printf("Number of pairs = ");
        for (int i = 0; i < x; i++)
        {
            element++;
        }
        int pair = element / 2;
        printf("%d", pair);
    }
    else
        printf("The number is odd 😂");

    return 0;
}