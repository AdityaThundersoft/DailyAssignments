//Write a C program to swap even and odd bits.
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int x = 0b10101010101010101010101010101010;
    int y = 0b01010101010101010101010101010101;
    n = ((n>>1)&y)|((n<<1)&x);
    printf("%d",n);
}
// enter a number: 5
// 10