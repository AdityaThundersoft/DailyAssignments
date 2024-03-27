//Write a C program to find first occurrence of a character in a given string.
#include <stdio.h>
#include <string.h>

int firstoccur(char* str, char c)
{
    int count = 0;
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==c)
        {
            printf("%c is first occured at index %d",c,i);
            break;
        }
    }
    
    return i;
}

int main()
{
    char str1[20];
    printf("enter str1: ");
    gets(str1);
    char c;
    printf("enter the char you want: ");
    scanf("%c",&c);
    firstoccur(str1,c);
    return 0;
}
// enter str1: aditya
// enter the char you want: d
// d is first occured at index 1