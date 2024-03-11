#include <stdio.h>

int main()
{
    float r;
    const float pi = 3.14;
    printf("enter radius:");
    scanf("%f",&r);
    printf("area is %f",pi*2*r);
    printf("\nperimeter is %f", pi*r*r);
}