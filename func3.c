//WAP to print fibanocci series using recursion
#include <stdio.h>

void fib(int n)
{
    if(n==0)
    return;
    else
    {
        static int a=0,b=1;
        int c = a+b;
        printf("%d ",c);
        a=b;
        b = c;
        fib(n-1);
    }
}

int main()
{
    int n;
    printf("enter upto what term pattern is to be printed: ");
    scanf("%d",&n);
    printf("%d %d ",0,1);
    fib(n-2);
    return 0;
}
// enter upto what term pattern is to be printed: 8
// 0 1 1 2 3 5 8 13 