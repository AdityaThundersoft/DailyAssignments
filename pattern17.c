#include <stdio.h>

int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%d ",j+1);
        }
        printf("\n");
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf("%d ",j+1);
        }
        printf("\n");
    }
    return 0;
}
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
