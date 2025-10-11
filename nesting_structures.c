// nesting of structures...
#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct student
    {
        int rollno;
        float marks;
        char adress[200];
    } student;
    typedef struct weak_student
    {
        student normal;
        float statue_marks;
    } weak_student;

    weak_student a;
    a.statue_marks = 4;
    a.normal.marks = 17;
    a.normal.rollno = 2;
    strcpy(a.normal.adress, "tral");
    printf("weak student marks + statue == %f+%f = %f", a.normal.marks, a.statue_marks, a.normal.marks + a.statue_marks);
    return 0;
}