//Write a function to calculate average of given numbers in an array
#include <stdio.h>

int avg(int a[], int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    return sum/n;
}

int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int av = avg(a,n);
    printf("the avg of array is : %d",av);
    return 0;
}
// enter n:5
// 1 2 3 4 5
// the avg of array is : 3