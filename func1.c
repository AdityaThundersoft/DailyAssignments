//WAP to convert a decimal number to binary using recursion
#include <stdio.h>

void d2b(int a)
{
       
        if(a==0)
        {
           return;
        }
        else
        {
            d2b(a>>1);
          printf("%d",(a)&1);
          return;
        }
}

int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    d2b(n);
    return 0;
}
// enter a number: 10
// 1010