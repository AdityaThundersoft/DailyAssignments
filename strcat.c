//String in built functions in c

//strcat
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    printf("enter str1: ");
    gets(str1);
    char str2[20];
    printf("enter str2: ");
    gets(str2);
    printf("before concat: %s\n",str1);
    strcat(str1,str2);
    printf("after concat: %s\n",str1);
    return 0;
// enter str1: hello 
// enter str2: world
// before concat: hello 
// after concat: hello world
}