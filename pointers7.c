//Write a C program to create, initialize and use pointers.
#include<stdio.h>
int main()
{
    int a=5;
    int* ptr = &a;
    printf("a is %d\n",a);
    printf("*ptr is %d\n",*ptr);
    printf("ptr is %d\n",ptr);
    printf("&a is %d\n",&a);
}
// a is 5
// *ptr is 5
// ptr is 6422296
// &a is 6422296