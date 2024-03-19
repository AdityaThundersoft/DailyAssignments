//Write a C program to copy all elements from an array to another array. - char / int - any one
#include <stdio.h>

void copy(int a[], int b[], int n)
{
    for(int i=0;i<n;i++)
    {
        b[i] = a[i];
    }
}

int main()
{
    int n;
    printf("enter no of elements in array: ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter a elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        b[i] = 0;
    }
    printf("bfore copying\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    copy(a,b,n);
    printf("after copying\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}
// enter no of elements in array: 6
// enter a elements
// 1 2 3 4 5 6
// bfore copying
// 0 0 0 0 0 0 
// after copying
// 1 2 3 4 5 6 