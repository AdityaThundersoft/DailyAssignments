#include <stdio.h>

int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int k=1;k<=2*n-1-2*i;k++)
        {
            printf(" ");
        }
        if(i<n)
        {
            for(int l=1;l<=i;l++)
            {
                printf("*");
            }   
        }
        else
        {
            for(int l=1;l<=i-1;l++)
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
    return 0;
}