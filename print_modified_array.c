// Give an array of integers,change the value of all odd indexed elements to its second multiple and
// increment all even indexed value by 10? 




#include <stdio.h>
int main()
{
    int x;
    printf("Enter size of your array  : ");
    scanf("%d", &x);
    int arr[x];

    for (int i = 0; i < x; i++)
    {
        printf("Enter element number %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Your entered array = ");
    for (int i = 0; i < x; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    printf("Modified array = ");
    for (int i = 0; i < x; i++)
    {
        if (i % 2 == 0)
            arr[i] += 10;
        else
            arr[i] *= 2;

        printf(" %d, ", arr[i]);
    }

    return 0;
}