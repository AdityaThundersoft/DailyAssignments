//Initialise a 2D array (all possible ways) and print the sum of all elements in the array row-wise.
#include <stdio.h>
int main()
{
    int r=3,c=2;
    int a[3][2] = {{1,2},{3,4},{5,6}};
    printf("first array is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("row wise sum for array1: ");
    for(int i=0;i<r;i++)
    {
        int sum =0;
        for(int j=0;j<c;j++)
        {
            sum = sum + a[i][j];
        }
        printf("%d ",sum);
    }
    
    int b[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            b[i][j] = i;
        }
    }
    printf("\nsecond array is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("row wise sum for array2: ");
    for(int i=0;i<r;i++)
    {
        int sum =0;
        for(int j=0;j<c;j++)
        {
            sum = sum + b[i][j];
        }
        printf("%d ",sum);
    }
    
}
// first array is:
// 1 2 
// 3 4 
// 5 6 
// row wise sum for array1: 3 7 11 
// second array is:
// 0 0 
// 1 1 
// 2 2 
// row wise sum for array2: 0 2 4 