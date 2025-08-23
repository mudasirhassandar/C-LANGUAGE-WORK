//Find the minmum value of element in your matrix and the index of that element?
#include <stdio.h>
#include <limits.h>
int main()
{
    int x;
    printf("Enter number of rows =  ");
    scanf("%d", &x);
    int y;
    printf("Enter number of colums =  ");
    scanf("%d", &y);
    int arr[x][y];
    int min=INT_MAX;
    int row = 0;
    int column = 0;
    

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter %d elements of  row %d\n", j + 1, i + 1);
            scanf("%d,", &arr[i][j]);
        }
        printf("\n");
    }
    printf("entered matrix:-\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
        if(min>arr[i][j]){
            min=arr[i][j];
            row = i;
            column = j;
        }
    }
    }
  printf("The minmum element in your matrix is %d at index = %d,%d",min,row,column );

    return 0;
}
