//C program to multiply 2 matrices
#include <stdio.h>
int main()
{
    int r1,c1,c2,r2;
    printf("enter r1,c1,r2,c2: ");
    scanf("%d %d %d %d",&r1,&r2,&c2,&c1);
    int a[r1][c1],b[r2][c2],m[r1][c2];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            m[i][j]=0;
        }
    }
    if(c1!=r2)
    {
        printf("matrix multiplication not possible\n");
    }
    else
    {
        printf("Enter elements for the first matrix:\n");
        for (int i = 0; i < r1; i++) 
        {
            for (int j = 0; j < c1; j++) 
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter elements for the second matrix:\n");
        for (int i = 0; i < r2; i++) 
        {
            for (int j = 0; j < c2; j++) 
            {
                scanf("%d", &b[i][j]);
            }
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                for(int k=0;k<c1;k++)
                {
                    m[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        printf("\nThe resultant matrix is\n");
        for (int i = 0; i < r1; i++) 
        {
            for (int j = 0; j < c2; j++) 
            {
                printf("%d ", m[i][j]);
            }
            printf("\n");
        }
        
    }
    
}
// enter r1,c1,r2,c2: 2 2 2 2
// Enter elements for the first matrix:
// 1 2 3 4
// Enter elements for the second matrix:
// 5 6 7 8

// The resultant matrix is
// 19 22 
// 43 50 
