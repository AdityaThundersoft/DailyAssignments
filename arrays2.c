//. Write a C program to find sum of all array elements. - using recursion.
#include <stdio.h>

int add(int a[], int n, int l)
{
    if(l==n)
    return 0;
    else
    return a[l]+add(a,n,l+1);
}

int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    printf("enter array elements\n");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum = add(a,n,0);
    printf("\nthe sum of elements in array is %d",sum);
}