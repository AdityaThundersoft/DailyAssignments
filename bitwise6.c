#include <stdio.h>
//Write a C program to toggle nth bit of a number.
int main()
{
   int n=2;
   int b = 4;
   printf("%d",n^(1<<(b-1)));
   return 0;
}