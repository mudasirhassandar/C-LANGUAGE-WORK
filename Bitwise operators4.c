//Q1. WAP to implement operators in c ?
#include <stdio.h>
int main() {
    int a = 10, b = 5, c;
    int *ptr = &a;
    // Bitwise Operators
    printf("Bitwise Operators:\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n\n", a >> 1);
