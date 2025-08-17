// Give an array of marks of students , if the marks of any student is less than 35 print its roll number .
// (here the roll number is index of an array)

#include <stdio.h>
int main()
{
    int marks[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter marks of %d student \n", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("Roll numbers of Fail students are :- ");
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] < 35)
            printf("%d ", i);
    }

    return 0;
}
