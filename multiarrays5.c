//Initialise a 3D array (all possible ways) and print the sum of all elements in the array row-wise.
#include <stdio.h>

void sum(int p, int r, int c, int a[p][r][c])
{
    for(int k=0;k<p;k++)
    {
        printf("sum of row wise elements in matrix %d is: ");
        for(int i=0;i<r;i++)
        {
            int s=0;
            for(int j=0;j<c;j++)
            {
                s = s+a[k][i][j];
            }
            printf("%d ",s);
        }
        printf("\n");
    }

}

int main()
{
    int p,r,c;
    printf("enter p,r,c: ");
    scanf("%d %d %d",&p,&r,&c);
    int a[p][r][c];
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
    void (*ptr)(int, int, int, int [][r][c]);
    ptr = &sum;
    (*ptr)(p,r,c,a);
    return 0;
}
// enter p,r,c: 2 2 2
// ENTER FIRST ARRAY ELEMENTS
// enter array elements for page 0 in first array
// 1 2 3 4
// enter array elements for page 1 in first array
// 5 6 7 8
// sum of row wise elements in matrix 0 is: 3 7 
// sum of row wise elements in matrix 1 is: 11 15 