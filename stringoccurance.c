//Write a C program to count occurrences of a character in given string.
#include <stdio.h>
#include <string.h>

int occur(char* str, char c)
{
    int count = 0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==c)
        count++;
    }
    return count;
}

int main()
{
    char str1[20];
    printf("enter str1: ");
    gets(str1);
    char c;
    printf("enter the char you want: ");
    scanf("%c",&c);
    printf("number of times %c occured is %d",c,occur(str1,c));
    return 0;
}
// enter str1: aditya
// enter the char you want: a
// number of times a occured is 2