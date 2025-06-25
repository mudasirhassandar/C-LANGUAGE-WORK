//Program 61: Store and Display Details of a Student Code:
#include <stdio.h>
struct Student {
int rollNo;    
char name[50];    
float marks;};
int main() {    
    struct Student s;    
    printf("Enter student roll number: ");    
    scanf("%d", &s.rollNo);    
    printf("Enter student name: ");    
    scanf(" %[^]", s.name);    
    printf("Enter student marks: ");    
    scanf("%f", &s.marks);    
    printf("\nStudent Details:\n");    
    printf("Roll No: %d\n", s.rollNo);    
    printf("Name   : %s\n", s.name);    
    printf("Marks  : %.2f\n", s.marks);    
    return 0;
}
