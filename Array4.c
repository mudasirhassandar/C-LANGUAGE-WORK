//49. Input a matrix from the user and display it. 
#include <stdio.h>
int main() {
    int mat[10][10], rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);

    printf("Enter elements:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    printf("Matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
