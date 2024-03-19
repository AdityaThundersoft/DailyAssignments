//C program to count even and odd numbers
#include <stdio.h>

void evenodd(int a[], int n)
{
    int count_e=0,count_o=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            count_e++;
        }
        else count_o++;
    }
    printf("the no of even is %d\nthe no of odd is %d",count_e,count_o);
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
    evenodd(a,n);
}
// enter n: 5
// enter array elements
// 1 2 3 4 5
// the no of even is 2
// the no of odd is 3