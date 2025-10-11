#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    typedef struct student
    {
        char name[50];
        int rollno;
        float marks;
    } student;
    int n;
    printf("ENTER THE NUMBER OF STUDENTS = ");
    scanf("%d", &n);
    getchar();
    student arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n--Enter the details of %d student--\n", i + 1);
        printf("Name of student = ");
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0';
        printf("Enter roll number of %s = ", arr[i].name);
        scanf("%d", &arr[i].rollno);
        printf("Enter marks of %s = ", arr[i].name);
        scanf("%f", &arr[i].marks);
        getchar();
    }
    float max = INT_MIN;
    char topper[20];
    int rn = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].marks > max)
        {
            max = arr[i].marks;
            strcpy(topper, arr[i].name);
            rn = arr[i].rollno;
        }
    }

    printf("\n%-20s %-10s %-20s\n", "NAME", "ROLL NO.", "MARKS");
    for (int i = 0; i < n; i++)
    {
        printf("\n%-20s %-10d %-10.2f\n", arr[i].name, arr[i].rollno, arr[i].marks);
    }
    printf("\n");
    printf("Topper = %s  Roll number = %d  Marks = %f", topper, rn, max);
    printf("\n");
    return 0;
}