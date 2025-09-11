// taking input of a string without using loop
#include<stdio.h>
#include<strings.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    puts(str);
    return 0;
}