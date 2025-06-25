//Program 62: Store and Display All Students in Tabular Format Code:
#include <stdio.h>
struct Student {    
int rollNo;    
char name[50];    
float marks;};
int main() {    
int n;    
printf("Enter number of students: ");    
scanf("%d", &n);    
struct Student s[n];    
for (int i = 0; i < n; i++) {        
printf("\nEnter details of student %d:\n", i + 1);        
printf("Roll No: ");        
scanf("%d", &s[i].rollNo);        
printf("Name: ");        
scanf(" %[^]", s[i].name);        
printf("Marks: ");        
scanf("%f", &s[i].marks);   
}    
printf("\n%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");    
for (int i = 0; i < n; i++) {        
printf("%-10d %-20s %-10.2f\n", s[i].rollNo, s[i].name, s[i].marks);    
}    
return 0;
}
