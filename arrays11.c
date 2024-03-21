//C program to get an element from an arrays
#include <stdio.h>

int get(int a[], int n, int in)
{
    return a[in];
}

int main()
{
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int in;
    printf("enter an index number: ");
    scanf("%d",&in);
    printf("The number at %d index is %d",in,get(a,n,in));
}
// enter n : 5
// 1 2 3 4 5
// enter an index number: 2
// The number at 2 index is 3