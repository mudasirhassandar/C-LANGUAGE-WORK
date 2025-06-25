//Q1. WAP to implement operators in c ?
#include <stdio.h>
int main() {
    int a = 10, b = 5, c;
    int *ptr = &a;
    // Assignment Operators
    printf("Assignment Operators:\n");
    c = a;
    c += b;
    printf("c += b: %d\n", c);
    c -= b;
    printf("c -= b: %d\n", c);
    c *= b;
    printf("c *= b: %d\n", c);
    c /= b;
    printf("c /= b: %d\n", c);
    c %= b;
    printf("c %%= b: %d\n\n", c);
