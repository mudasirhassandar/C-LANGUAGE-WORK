#include <stdio.h>
int main()
{
    struct student
    {
        int roll_no;
        float percentage;
        char grade;
    };
    struct student mudasir;
    printf("Enter the Roll Number = ");
    scanf("%d", &mudasir.roll_no);
    printf("Enter the Percentage = ");
    scanf("%f", &mudasir.percentage);
    printf("Enter the grade = ");
    scanf(" %c", &mudasir.grade);
    printf("\n--Students Details--\n");
    printf("Roll Number = %d\n", mudasir.roll_no);
    printf("Percentage = %f\n", mudasir.percentage);
    printf("Grade = %c\n", mudasir.grade);

    return 0;
}