//Write a C program to find sum of all natural numbers between 1 to n using recursion.
#include <stdio.h>

int sum(int n)
{
    if(n==0)
    return 0;
    else
    return n + sum(n-1);
}

int main()
{
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    printf("%d is sum",sum(n));
}
// enter n : 10
// 55 is sum