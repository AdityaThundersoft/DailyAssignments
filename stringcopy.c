#include <stdio.h>
#include <string.h>

void copy(char* str1, char* str2)
{
    int i=0;
    while(str1[i]!='\0')
    {
        str2[i] = str1[i];
        i++;
    }
}

int main()
{
    char str1[20],str2[20];
    printf("enter str1: ");
    gets(str1);
    copy(str1,str2);
    printf("'%s' is the copied string",str2);
    return 0;
}
// enter str1: Hello World
// 'Hello World' is the copied string