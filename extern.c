#include <stdio.h>
void funct1(void);
void funct2(void);

int globvar = 10;
int main()

{

    printf("\n****storage classes and scope****\n");
    globvar = 20;
    printf("\nVariable globvar, in main() = %d\n", globvar);
    funct1();
    printf("\nVariable globvar, in main() = %d\n", globvar);
    funct2();
    printf("\nVariable globvar, in main() = %d\n", globvar);

    return 0;
}

int globvar2 = 30;

void funct1(void)
{

    char globvar;
    globvar = 'A';
    globvar2 = 40;
    printf("\nIn funct1(), globvar = %c and globvar2 = %d\n", globvar, globvar2);
}


void funct2(void)
{
   double globvar2;
    globvar =  50;
    globvar2 = 1.234;
    printf("\nIn funct2(), globvar = %d and globvar2 = %.4f\n", globvar, globvar2);
}