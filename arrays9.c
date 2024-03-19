//C program to print unique elements in an arrays
#include <stdio.h>

void uniq(int a[], int n)
{
    int b[n];
    int h =0,x=0 ;
    b[0] = a[0];
    for(int i=1;i<n;i++)
    {
        x = 0 ;
        for(int j=0;j<=h;j++)
        {
            if(a[i] == b[j]){
                x =1 ;
            }
            
        }
        if(x==0){
            b[++h] = a[i];
        }
    }
    for(int i=0;i<=h;i++)
    {
        printf("%d ",b[i]);
    }

}

int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements: \n");
    for( int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    uniq(a,n);
}
//enter n: 5
// enter array elements: 
// 1 2 2 3 3
// 1 2 3