#include <stdio.h>
//Write a C program to clear nth bit of a number.
int main()
{
   int n=10;
   int b = 4;
   int a = (1<<16)-1-(1<<(b-1));
   printf("%d",n&a);
   return 0;
}