#include <stdio.h>
int func(void)
{
    register int a =5;
    printf("%d",a);
}

int main() {
    register int a=10;
    printf("%d\n",a);
    func();
    return 0;
}