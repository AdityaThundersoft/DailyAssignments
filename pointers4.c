//Write a C program to sort an int array using pointers. [ increasing order ]

#include <stdio.h>

int main() 
{
    int a[] = {5,4,3,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[i]<a[j])
            {
                int temp = a[i];
                a[i]= a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]); 
    }
    return 0;
}