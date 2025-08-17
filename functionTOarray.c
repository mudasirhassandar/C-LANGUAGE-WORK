// swaping of two elements of an array using functions?

#include <stdio.h>

void fun(int arr[])
{
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return;
}

int main()
{
    int arr[2] = {2, 9};
    printf("%d %d\n", arr[0], arr[1]);
    fun(arr);

    printf("%d %d\n", arr[0], arr[1]);

    return 0;
}
// arrays are pass by refrance without using of pointers....
// Here address of the frist element passes. Because address of the frist element decides the  address 
// of the whole array.