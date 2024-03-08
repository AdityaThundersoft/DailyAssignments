#include <stdio.h>

int main() {
    int i=1,n=5;
    char c = 'a';
    while(i<=n)
    {
        int j=1;
        while(j<=2*n)
        {
            if(j==(n-(i-1))) printf("/");
            else if (j==n+i) printf("\\");
            else printf(" ");
            j++;
        }
        printf("\n");
        i++;
    }
    while(i<=2*n)
    {
        printf("--");
        i++;
    }
    return 0;
}