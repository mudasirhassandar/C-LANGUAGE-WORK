//Program 63: Store and Display Employee Details Code:
#include <stdio.h>
struct Employee {    
int empId;    char name[50];    
char department[30];    
float salary;};int main() {    
struct Employee e;    
printf("Enter Employee ID: ");    
scanf("%d", &e.empId);    
printf("Enter Employee Name: ");    
scanf(" %[^]", e.name);    
printf("Enter Department: ");    
scanf(" %[^]", e.department);    
printf("Enter Salary: ");    
scanf("%f", &e.salary);    
printf("\nEmployee Details:\n");    
printf("ID         : %d\n", e.empId);    
printf("Name       : %s\n", e.name);    
printf("Department : %s\n", e.department);    
printf("Salary     : %.2f\n", e.salary);    
return 0;
}
