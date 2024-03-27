#include <stdio.h>
#include <string.h>

void concat(char* str1, char* str2)
{
    int i=0;
    int j = strlen(str1);
    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[i + j] = str2[i];
    }
 
    str1[i + j] = '\0';
}

int main()
{
    char str1[20];
    printf("enter str1: ");
    gets(str1);
    char str2[20];
    printf("enter str2: ");
    gets(str2);
    printf("'%s' is string before concat \n",str1);
    concat(str1,str2);
    printf("'%s' is string after concat ",str1);
    return 0;
}
// enter str1: Hello 
// enter str2: World
// 'Hello'  is string before concat 
// 'Hello World' is string after concat