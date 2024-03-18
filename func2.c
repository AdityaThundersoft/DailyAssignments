//WAP to print factorial of a number using recursion
#include <stdio.h>

int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}

int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("%d is factorial of %d",fact(n),n);
}
// enter a number: 5
// 120 is factorial of 5