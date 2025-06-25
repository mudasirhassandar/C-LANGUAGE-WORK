//Q1. WAP to implement operators in c ?
#include <stdio.h>
int main() {
    int a = 10, b = 5, c;
    int *ptr = &a;
    // Increment/Decrement Operators
    printf("Increment/Decrement Operators:\n");
    printf("a++ = %d\n", a++);
    printf("Now a = %d\n", a);
    printf("++a = %d\n", ++a);
    printf("a-- = %d\n", a--);
    printf("Now a = %d\n", a);
    printf("--a = %d\n\n", --a);
