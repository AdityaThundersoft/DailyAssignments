//Write a C program to delete an element in an array at specified position
#include <stdio.h>
void insert(int a[], int* n, int pos)
{
    
    if(pos<0 || pos>*n)
    {
        printf("invalid position");
    }
    else
    {
        for(int i=pos;i<*n-1;i++)
        {
            a[i] = a[i+1];
        }
    }
    (*n)--;

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
    int pos;
    printf("enter position you want to delete: ");
    scanf("%d",&pos);
    insert(a,&n,pos);
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
// enter n: 6
// enter array elements:
// 1 2 3 4 5 6
// enter position you want to delete: 3
// 1 2 3 5 6 