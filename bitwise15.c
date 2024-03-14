//Write a C program to check whether a number is even or odd using bitwise operator.
#include <stdio.h>

int main() 
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    if(n&1)
    printf("odd number");
    else
    printf("even number");

    return 0;
}
// enter n: 7
// odd number