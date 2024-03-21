//C program to sort an array and find min and max
#include <stdio.h>

void sort(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    printf("enter array elements: \n");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("array after sorting: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nthe min number is %d",a[0]);
    printf("\nthe max number is %d",a[n-1]);
}
// enter n: 5
// enter array elements: 
// 5 4 3 2 1
// array after sorting: 
// 1 2 3 4 5 
// the min number is 1
// the max number is 5