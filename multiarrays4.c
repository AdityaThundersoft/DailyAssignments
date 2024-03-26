//WAP to add two 3D arrays and print the resultant array.
#include <stdio.h>
void sum(int p, int r, int c, int a[p][r][c], int b[p][r][c], int s[p][r][c])
{
    for(int k=0;k<p;k++)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                s[k][i][j] = a[k][i][j] + b[k][i][j];
            }
        }
    }
}


int main()
{
    int r,c,p;
    printf("enter r,c,p: ");
    scanf("%d %d %d",&r,&p,&c);
    int a[p][r][c],b[p][r][c],s[p][r][c];
    printf("ENTER FIRST ARRAY ELEMENTS\n");
    for(int k=0;k<p;k++)
    {
        printf("enter array elements for page %d in first array\n",k);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                scanf("%d",&a[k][i][j]);
            }
        }
    }
     printf("ENTER SECOND ARRAY ELEMENTS\n");
    for(int k=0;k<p;k++)
    {
        printf("enter array elements for page %d in second array\n",k);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                scanf("%d",&b[k][i][j]);
            }
        }
    }
    void (*ptr)(int, int, int, int [][r][c], int [][r][c], int [][r][c]);
    ptr = &sum;
    (*ptr)(p,r,c,a,b,s);
    printf("Resultant array is:\n");
    for(int k=0;k<p;k++)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                printf("%d ",s[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    
    return 0;
}
// enter r,c,p: 2 2 2
// ENTER FIRST ARRAY ELEMENTS
// enter array elements for page 0 in first array
// 1 2 3 4
// enter array elements for page 1 in first array
// 5 6 7 8
// ENTER SECOND ARRAY ELEMENTS
// enter array elements for page 0 in second array
// 1 2 3 4
// enter array elements for page 1 in second array
// 5 6 7 8
// Resultant array is:
// 2 4 
// 6 8 

// 10 12 
// 14 16 