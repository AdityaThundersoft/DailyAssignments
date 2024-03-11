#include <stdio.h>

int main() {

    short shortVar = 32767;
    unsigned short ushortVar = 65535;
    int intVar = 2147483647;
    unsigned int uintVar = 4294967295;
    long longVar = 9223372036854775808;
    unsigned long ulongVar = 18446744073709551616;
    long long longlongVar = 9223372036854775807;
    unsigned long long ulonglongVar = 18446744073709551615;
    float floatVar = 3.14f;
    double doubleVar = 3.14159265359;

    printf("short: %d, \n", shortVar);
    printf("unsigned short: %u\n", ushortVar);

    printf("int: %d,  \n", intVar);
    printf("unsigned int: %u  \n", uintVar);

    printf("long: %ld  \n", longVar);
    printf("unsigned long: %lu \n", ulongVar);

    printf("long long: %lld \n", longlongVar);
    printf("unsigned long long: %llu \n", ulonglongVar);

    printf("float: %f  \n", floatVar);
    printf("double: %lf \n", doubleVar);

    return 0;
}
