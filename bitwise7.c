#include <stdio.h>
//Write a C program to swap two numbers using bitwise operator.
int main()
{
   int a,b;
   printf("Enter 2 numbers: ");
   scanf("%d %d",&a,&b);
   a = a^b;
   b = a^b;
   a = a^b;
   printf("%d %d", a,b);
}