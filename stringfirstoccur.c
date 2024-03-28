//Write a C program to find first occurrence of a character in a given string.
#include <stdio.h>
#include <string.h>

int firstoccur(char* str, char c)
{
    int i;
    for(i = 0; i < strlen(str); i++)
    {
        (str[i] == c) ? return i : ; // Return index if character is found
    }
    
    return -1; // Return -1 if character is not found
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