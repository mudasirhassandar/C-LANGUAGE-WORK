//65. Swap two numbers using cell by refrence
#include<stdio.h>
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=5, y=10;
    printf("before swap: x=%d,y=%d\n",x,y);
    return 0;
}