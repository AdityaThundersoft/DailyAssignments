#include <stdio.h>

int main()

{
    char A = 'A';
    char a = 'a';
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<n-(i-1);j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            if(i%2!=0)
            {
                printf("%c",A);
                
            }
            else
            {
                printf("%c",a);
                
            }
        }
        a = a+1;
        A = A+1;
        printf("\n");
    }
    return 0;
}