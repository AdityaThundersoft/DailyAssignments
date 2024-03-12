#include <stdio.h>
#define MAXNUM 3
void sum_up(void);
  
int main()
{
    int count;
    printf("\n*****static storage*****\n");
    printf("Key in 3 numbers to be summed ");
    for(count = 0; count < MAXNUM; count++)
        sum_up();
    printf("\n*****COMPLETED*****\n");
    return 0;
}

void sum_up(void)
{
    static int sum = 0;
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    sum += num;
    printf("\nThe current total is: %d\n", sum);

}