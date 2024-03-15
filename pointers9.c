//Write a C program to swap two arrays using pointers.
#include <stdio.h>

void swap(int* a, int* b, int n)
{
    for(int i=0;i<n;i++)
    {
        int t = a[i];
        a[i] = b[i];
        b[i] = t;
    }
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d integers for array 1: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int b[n];
    printf("Enter %d integers for array 2: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    swap(a,b,n);
    printf("array1: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("array2: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
// Enter n: 5
// Enter 5 integers for array 1: 1 2 3 4 5
// Enter 5 integers for array 2: 6 7 8 9 0
// array1: 6 7 8 9 0
// array2: 1 2 3 4 5