#include <stdio.h>
//Write a C program to set nth bit of a number.
int main()
{
   int n=10;
   int b = 3;
   printf("%d",n|(1<<(b-1)));
   return 0;
}