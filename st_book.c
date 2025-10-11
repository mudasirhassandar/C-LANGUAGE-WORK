#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[50];
        int no_of_pages;
        float price;
    } A, B, C;
    A.no_of_pages = 500;
    A.price = 100.10;
    strcpy(A.name, "English");
    B.no_of_pages = 400;
    B.price = 90.10;
    strcpy(B.name, "Maths");
    C.no_of_pages = 300;
    C.price = 80.5;
    strcpy(C.name, "Urdu");
    printf("Number of pages = %d\n", A.no_of_pages);
    printf("Price = %f\n", A.price);
    printf("Name of book = %s\n", A.name);
    printf("\n");
    printf("Number of pages = %d\n", B.no_of_pages);
    printf("Price = %f\n", B.price);
    printf("Name of book = %s\n", B.name);
    printf("\n");
    printf("Number of pages = %d\n", C.no_of_pages);
    printf("Price = %f\n", C.price);
    printf("Name of book = %s\n", C.name);
    printf("\n");
    return 0;
}