//set 2 bits of number given pos1, pos2 and make the bits in those positions as zero
#include <stdio.h>
int main()
{
  int n,pos1,pos2;
  printf("enter n: ");
  scanf("%d",&n);
  printf("enter 2 bits: ");
  scanf("%d %d",&pos1,&pos2);
  int a = (1<<16)-1-(1<<(pos1-1));
  int b = (1<<16)-1-(1<<(pos2-1));
  a = a&b;
  printf("%d",n&a);
}
// enter n: 13
// enter 2 bits: 3 4
// 1