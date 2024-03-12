#include <stdio.h> 
int func(void)
{
    auto int a =5;
    printf("%d",a);
}

int main() {
    // Write C code here
    int a=10;
    printf("%d\n",a);
    func();
    return 0;
}