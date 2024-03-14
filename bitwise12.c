#include <stdio.h>
//Write a C program to flip bits of a binary number.
int main()
{
   int n;
   printf("enter n: ");
   scanf("%d",&n);
   int b=0;
   //nbits = sizeof(int)*8;
   while(n!=0)
   {
    b = (b<<1) + (n&1);
    n = n>>1;
   }
   printf("%d is flip of given number",b);
}
// enter n: 5
// 5 is flip of given number