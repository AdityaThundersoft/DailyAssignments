//Write a C program to add two numbers using pointers.
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter a and b: ");
    scanf("%d %d",&a,&b);
    int *ptr1,*ptr2;
    ptr1 = &a;
    ptr2 = &b;
    printf("sum is %d",*ptr1+*ptr2);
}
// enter a and b: 2 3
// sum is 5