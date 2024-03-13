#include<stdio.h>

int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       
        for(int j=1;j<=2*n;j++)
        {
            if(i==n)
            {
                if(j==n-(i-1))
                printf("/");
                else if( j==n+i)
                printf("\\");
                else printf("_");
            }
            else
            {
                if(j==n-(i-1))
                printf("/");
                else if( j==n+i)
                printf("\\");
                else printf(" ");
            }
        }
        
        printf("\n");
        
    }
    return 0;
}
//     /\    
//    /  \   
//   /    \  
//  /      \ 
// /________\
