#include <stdio.h>
int main()
{
    FILE *ptr = fopen("home.txt", "w");
    char str[] = "hello\nhow are you"; // this will u see in ur text file
    fputs(str, ptr);
    fclose(ptr);

    return 0;
}