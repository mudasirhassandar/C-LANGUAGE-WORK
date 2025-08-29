// WAP to change the given n*n matrix into transpose without using another matrix?

#include <stdio.h>
int main()
{
    int x;
    printf("Enter number of rows/columns =  ");
    scanf("%d", &x);
    
    int arr[x][x];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("Enter %d elements of %d row\n", j + 1, i + 1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("Your 2D array is :-");
    printf("\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<x;i++){
        for(int j=i;j<x;j++){
            
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    
    }
    printf("\n");
    printf("Transpose of matrix:-\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
   return 0;
}