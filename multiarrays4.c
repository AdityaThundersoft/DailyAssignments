//WAP to add two 3D arrays and print the resultant array.
#include <stdio.h>
int main()
{
    int r,c,p;
    printf("enter r,c,p: ");
    scanf("%d %d %d",&r,&p,&c);
    int a[p][r][c];
    for(int k=0;k<=p;k++)
    {
        printf("enter array elements for page %d",k);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                scanf("%d ",&a[k][i][j]);
            }
        }
    }
    for(int k=0;k<=p;k++)
    {
        printf("enter array elements for page %d",k);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                printf("%d ",a[k][i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    return 0;
}