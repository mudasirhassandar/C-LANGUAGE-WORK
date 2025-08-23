// eek matrix ha 4*5 ki.hum ko sum krrna ha ussma ek perticula ractangel ka
// jis row= 0 say 2 hooga aur column=1 say <5 tak
#include <stdio.h>
int main()
{

    int arr[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter %d elements of %d row = ", j + 1, i + 1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("Your 2D array is :-");
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 2; j <= 4; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("sum of elements = %d", sum);
    return 0;
}