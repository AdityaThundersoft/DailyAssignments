#include<stdio.h>

int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            if(i==n)
            {
                if(j%2!=0)
                printf("*");
                else 
                printf(" ");
           }
           else
           {
                if(j==n-(i-1) || j==n+i-1)
                printf("*");
                else printf(" ");
           }
        }
        printf("\n");
    }
}
//     *    
//    * *   
//   *   *  
//  *     * 
// * * * * *