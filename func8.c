//Write a C program to print all natural numbers between 1 to n using recursion.
#include <stdio.h>

void print(int n)
{
    if(n>=1)
    {
        if(n==1)
        printf("%d ",1 ) ;
        else
        {
        print(n-1);
        printf("%d ",n);
        }
    }
}

int main()
{
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    print(n);
}
// enter n : 10
// 1 2 3 4 5 6 7 8 9 10