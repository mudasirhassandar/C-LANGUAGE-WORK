#include <stdio.h>
typedef struct student
{
    int rollno;
    int marks;
} student;
void fun(student mudasir)
{
    printf("Marks = %d. \nRoll Number = %d. ", mudasir.marks, mudasir.rollno);
    return;
}
int main()
{
    student mudasir;
    mudasir.marks = 99;
    mudasir.rollno = 72;
    fun(mudasir);
    return 0;
}