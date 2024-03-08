#include <stdio.h>

int main() {
    //for printing even numbers
    for(int i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }

    //for printing odd numbers
    for(int i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}