#include <stdio.h>

int main() {
    double a ,b;
    printf("enter 2 double numbers: ");
    scanf("%lf %lf",&a,&b);
    char c;
    printf("enter a char: ");
    scanf(" %c",&c);
    
    switch(c)
    {
        case 'a':
        {
            printf("The sum is %lf",a+b);
            break;
        }
        case 'b':
        {
            printf("The difference is %lf",a-b);
            break;
        }
        default:
        printf("no action");
        
    }
    return 0;
}