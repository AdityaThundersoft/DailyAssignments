#include <stdio.h>
//Write a C program to count count total zeros and ones in a binary number.
int main()
{
   int n;
   printf("enter n: ");
   scanf("%d",&n);
   int count=0;
   int count0=0,count1=0;
   //nbits = sizeof(int)*8;
   while(n!=0 )
   {
    
    if(n&1)
    count1++;
    else 
    count0++;
    n=n>>1;
   }
   printf("%d no of 1s and %d no of 0s",count1,count0);
}
// enter n: 10
// 2 no of 1s and 2 no of 0s