//Write a C program to sort an int array using pointers. [ decreasing order ]

#include <stdio.h>

int main() 
{
    int a[] = {5,4,3,2,1};
    int* p = a;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(*(p+i)>*(p+j))
            {
                int temp = *(p+i);
                *(p+i)= *(p+j);
                *(p+j) = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]); 
    }
    return 0;
}