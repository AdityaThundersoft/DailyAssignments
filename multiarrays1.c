#include <stdio.h>

void add_matrix(int r, int c, int a[r][c], int b[r][c], int sum[r][c]) {
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int r, c;

    printf("Enter the number of rows and columns (same for both matrices): ");
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c];
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }
    int sum[r][c];
    add_matrix(r, c, a, b, sum);
    printf("Sum of the matrices:\n");
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// Enter the number of rows and columns (same for both matrices): 2 2
// Enter elements for the first matrix:
// 1 2 3 4
// Enter elements for the second matrix:
// 1 2 3 4
// Sum of the matrices:
// 2 4 
// 6 8 
