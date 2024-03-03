#include <stdio.h>

int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(i%2!=0)
            {
                printf("%d ",(i+1)/2);
            }
            else
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}