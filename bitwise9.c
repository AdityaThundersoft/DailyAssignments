#include <stdio.h>
//Write a C program to get lowest set bit of a number.
int main()
{
   int n;
   printf("enter n: ");
   scanf("%d",&n);
   int count=1;
   while(n>0 )
   {
       if(n&1)
       break;
       else
       {
        count++;
        n = n>>1;
       }
   }
   printf("%d bit is lowest set bit",count);
}
// enter n: 9
// 1 bit is lowest set bit