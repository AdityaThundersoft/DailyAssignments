//Write a C program to find length of string using pointers.
#include <stdio.h>
int main()
{
    int count = 0,i=0;
    char str[50];
    printf("Enter a string : ");
    gets(str);
    while(*(str+i)!='\0')
    {
        count++;
        i++;
    }
    printf("length is %d",count);
}
// Enter a string : Thundersoft
// length is 11