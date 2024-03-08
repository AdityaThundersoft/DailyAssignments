#include <stdio.h>

int main() {
    int sum =0;
    int a;
    while(scanf("%d",&a))
    {
        if(a>=0)
        {
            sum += a;
        }
        else
        break;
    }
    printf("%d",sum);
    return 0;
}