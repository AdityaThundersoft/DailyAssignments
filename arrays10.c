//C program to print unique elements in an arrays
#include <stdio.h>

void freq(int a[], int n)
{
    int b[n],c[n];
    int h =0,x=0 ;
    b[0] = a[0];
    c[0] = 1;
    for(int i=1;i<n;i++)
    {
        x =0 ;
        for(int j=0;j<=h;j++)
        {
            if(a[i] == b[j])
            {
                x = 1;
                c[j]++;
            }
            
        }
        if(x==0){
            b[++h] = a[i];
            c[h] = 1;
        }
    }
    for(int i=0;i<=h;i++)
    {
        printf("%d %d \n",b[i],c[i]);
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
    freq(a,n);
}
// enter n: 5
// enter array elements: 
// 1 2 3 2 3
// 1 1 
// 2 2 
// 3 2 