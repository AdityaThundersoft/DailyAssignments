#include <stdio.h>
//Write a C program to get highest set bit of a number
int main()
{
   int n;
   printf("entern n: ");
   scanf("%d",&n);
   int count=0;
   //nbits = sizeof(int)*8;
   while(n!=0 )
   {
    count++;
    n = n>>1;
   }
   printf("%d bit is highest set bit",count);
}
// entern n: 6
// 3 bit is highest set bit