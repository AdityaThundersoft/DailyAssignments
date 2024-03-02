#include <stdio.h>

void swap(int* a, int* b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf("After swapping\na=%d, b=%d",*a,*b);
}

int main() {
    int a=5,b=6;
    printf("Before swapping\na=%d, b=%d\n",a,b);
    swap(&a,&b);
    return 0;
}