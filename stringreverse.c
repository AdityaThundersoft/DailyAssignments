//Write a C program to find reverse of a string.
#include <stdio.h>
#include <string.h>

void reverse(char* str1, char* str2)
{
    int i;
    for( i=0;i<strlen(str1);i++)
    {
        str2[i] = str1[strlen(str1)-i-1];
    }
    str2[i] = '\0';
}

int main()
{
    char str1[20],str2[20];
    printf("enter str1: ");
    gets(str1);
    reverse(str1,str2);
    printf("The reverse of string is %s",str2);
    return 0;
}
// enter str1: Aditya
// The reverse of string is aytidA