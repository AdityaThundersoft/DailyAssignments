#include <stdio.h>
//Write a C program to get nth bit of a number.
int main()
{
   int n=6;
   int b = 2;
   printf("%d",(n>>(b-1))&1);
}