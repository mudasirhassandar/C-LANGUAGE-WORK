//51. Find the sum of all diagonal elements of a matrix. 
#include <stdio.h>
int main() {
    int mat[10][10], n, sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for(int i = 0; i < n; i++)
        sum += mat[i][i];  // main diagonal
    printf("Sum of diagonal elements = %d\n", sum);
    return 0;
}
