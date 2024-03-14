#include <stdio.h>
//Write a C program to count leading zeros in a binary number.
int main()
{
   int n;
   printf("enter n: ");
   scanf("%d",&n);
   int count=0;
   //nbits = sizeof(int)*8;
   while(n!=0 )
   {
    count++;
    n = n>>1;
   }
   printf("%d no of leading zeros are there",32-count);
}
// enter n: 10
// 28 no of leading zeros are there