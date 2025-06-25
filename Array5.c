//50. Find transpose of a matrix. 
#include <stdio.h>
int main() {
    int mat[10][10], trans[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);
    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            trans[j][i] = mat[i][j];

    printf("Transpose of matrix:\n");
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++)
           printf("%d ", trans[i][j]);
        printf("\n");
    }
    return 0;
}
