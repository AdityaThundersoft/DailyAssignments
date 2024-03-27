//Write a C program to check whether a string is palindrome or not.
#include <stdio.h>
#include <string.h>

void palindrome(char* str1)
{
    char str2[20];
    int i;
    for( i=0;i<strlen(str1);i++)
    {
        str2[i] = str1[strlen(str1)-i-1];
    }
    str2[i] = '\0';
    int r = strcmp(str1,str2);
    if(r==0) printf("'%s' is palindrome",str1);
    else printf("'%s' is not a palindrome",str1);
}

int main()
{
    char str1[20];
    printf("enter str1: ");
    gets(str1);
    palindrome(str1);
    return 0;
}
// enter str1: Aditya
// 'Aditya' is not a palindrome
// enter str1: helleh
// 'helleh' is palindrome
