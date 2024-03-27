#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    printf("enter str1: ");
    gets(str1);
    
    printf("lenght of str1 is: %d\n",strlen(str1));
    return 0;
}
// enter str1: Hello, World
// lenght of str1 is: 12