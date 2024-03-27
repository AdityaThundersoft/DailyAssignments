#include <stdio.h>
#include <string.h>

int length(char* str)
{
    int count = 0;
    int i=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}

int main()
{
    char str1[20];
    printf("enter str1: ");
    gets(str1);
    printf("The length of string is %d",length(str1));
    return 0;
}
// enter str1: Hello World
// The length of string is 11