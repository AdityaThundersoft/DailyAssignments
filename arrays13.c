//returning an array from a function
#include <stdio.h>

int* func()
{
    static int a[5] = {1,2,3,4,5};
    return a;
}

int main()
{
    int* res = func();
    int n = sizeof(res)/sizeof(res[0]);
    for(int i=0;i<5;i++)
    {
        printf("%d ",*res++);
    }
}
//1 2 3 4 5