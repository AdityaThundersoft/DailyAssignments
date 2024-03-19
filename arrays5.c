//Write a C program to insert an element in an array at specified position
#include <stdio.h>
void insert(int a[], int *n, int x, int pos)
{
    (*n)++;
    if(pos<0 || pos>*n)
    {
        printf("invalid position");
    }
    else
    {
        for(int i=*n-1;i<=pos;i--)
        {
            a[i+1] = a[i];
        }
        a[pos] = x;
    }

}
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x, pos;
    printf("enter positin and no you want to insert: ");
    scanf("%d %d",&pos,&x);
    insert(a,&n,x,pos);
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
// enter n: 5
// enter array elements:
// 1 2 3 4 5
// enter positin and no you want to insert: 2 10
// 1 2 10 3 4 5 