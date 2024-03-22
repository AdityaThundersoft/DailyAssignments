//Write a C program to check if the given number is power of 2.
#include <stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    if(n&(n-1))
    printf("%d not a power of 2",n);
    else
    printf("%d is a power of 2",n);
}
// enter n: 128
// 128 is a power of 2