//C program to count negative numbers in an array
#include <stdio.h>

void neg(int a[], int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            count++;
        }
    }
    printf("the no of negative are %d",count);
}

int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    neg(a,n);
}
// enter n: 5
// enter array elements
// -1 2 -3 -4 5
// the no of negative are 3