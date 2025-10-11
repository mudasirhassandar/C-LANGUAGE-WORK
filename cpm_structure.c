// compare two structures
#include <stdio.h>
#include <stdbool.h>
int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;
    date a, b;
    printf("--Enter first date--\n");
    printf("Enter the day = ");
    scanf("%d", &a.day);

    printf("Enter the month = ");
    scanf("%d", &a.month);

    printf("Enter the year = ");
    scanf("%d", &a.year);
    printf("\n");

    printf("--Enter second date--\n");
    printf("Enter the day = ");
    scanf("%d", &b.day);

    printf("Enter the month = ");
    scanf("%d", &b.month);

    printf("Enter the year = ");
    scanf("%d", &b.year);
    bool flag = true;
    if (a.day != b.day)
        flag = false;
    if (a.month != b.month)
        flag = false;
    if (a.year != b.year)
        flag = false;
    printf("\n");
    if (flag == true)
        printf("--Dates are Equal--");
    else
        printf("--Dates are not Equal--");
    return 0;
}