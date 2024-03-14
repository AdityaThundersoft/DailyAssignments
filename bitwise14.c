#include <stdio.h>
//Write a C program to convert decimal to binary number system using bitwise operator.
int main()
{
   int n;
   printf("enter n: ");
   scanf("%d",&n);
   int count=0;
   int num = n;
   //nbits = sizeof(int)*8;
   while(n!=0 )
   {
    count++;
    n = n>>1;
   }
   int c = count-1,b=0;
   for(int i=1;i<=count;i++)
   {
     b = b*10 + (num>>c)&1;
     c--;
     printf("%d",b);
   }
}
// enter n: 63
// 111111