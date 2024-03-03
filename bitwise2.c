#include <stdio.h>
//Write a C program to check Most Significant Bit (MSB) of a number is set or not.
int main()
{
    int a=0;
    int n=5;
    int c=n;
    while(c<0)
    {
            c>>1;
            a++;
            printf("%d",c);
    }
    printf("%d",n&(1<<a));
    return 0;
}