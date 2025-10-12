// ------PASS BY VALUE--------
// #include<stdio.h>
// typedef struct student
// {
//     int rollno;
//     char grade;
//     float marks;
// }student;
// void change(student *mudasir){
//       mudasir->rollno = 70;
//      mudasir->grade = 'a';
//     mudasir->marks = 100.0;
// return ;
// }
// int main(){

//     student mudasir;
//     mudasir.rollno = 72;
//     mudasir.grade = 'O';
//     mudasir.marks = 99.9;
//     change(&mudasir);
//     printf("roll number = %d\n",mudasir.rollno);
//     printf("grade  = %c\n",mudasir.grade);
//     printf("marks  = %f\n",mudasir.marks);

//     return 0;
// }
// ========PASS BY REFERENCE=========
#include <stdio.h>
typedef struct student
{
    int rollno;
    char grade;
    float marks;
} student;
void change(student *mudasir)
{
    (*mudasir).rollno = 70; // (*mudasir).rollno is same as mudasir->rollno
    mudasir->grade = 'a';
    mudasir->marks = 100.0;
    return;
}
int main()
{

    student mudasir;
    mudasir.rollno = 72;
    mudasir.grade = 'O';
    mudasir.marks = 99.9;
    change(&mudasir);
    printf("roll number = %d\n", mudasir.rollno);
    printf("grade  = %c\n", mudasir.grade);
    printf("marks  = %f\n", mudasir.marks);

    return 0;
}
// <<NOTE>>
// STRUCTURES ARE PASS BY REFERENCE: