
// C program to remove a row and column in a matrix
#include <stdio.h>
int main() {
    int r,c;
    printf("enter r and c: ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int r1,c1;
    printf("enter row and column you want to delete: ");
    scanf("%d %d",&r1,&c1);
    printf("before deleting:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=c1;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            a[j][i] = a[j][i+1];
        }
    }
    for(int i=r1;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            a[i][j] = a[i+1][j];
        }
    }
    c = c-1;
    r = r-1;
    printf("\nAfter deleting:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// enter r and c: 3 3
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// enter row and column you want to delete: 1 1
// before deleting:
// 1 2 3 
// 4 5 6 
// 7 8 9 

// After deleting:
// 1 3 
// 7 9