#include <stdio.h>
int main()
{

    int arr[5] = {2, 3, 6, 8, 1};
    for (int i = 0; i < 5; i++)
    {
        printf("%p \n", &arr[i]);
    }

    return 0;
}
//output is like that:
// 0x16b972f40 
// 0x16b972f44 
// 0x16b972f48 
// 0x16b972f4c 
// 0x16b972f50
// hexa decimal rule:
   // 0 1 2 3 4 5 6 7 8 9 a  b  c  d  e 
   // 0 1 2 3 4 5 6 7 8 9 10 11 12. basically here c is equal to zero.
   