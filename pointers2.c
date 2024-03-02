#include <stdio.h>

int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i] = *(a+i);
    }
    printf("The copied array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}