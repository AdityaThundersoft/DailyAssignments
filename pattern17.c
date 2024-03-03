#include <stdio.h>

int main()
{
    int n=5;
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