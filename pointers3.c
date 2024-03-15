//Write a C program to copy one string to another string and find length of new string using pointers.
#include <stdio.h>

int main() 
{
    char a[]="Aditya";
    char* p = a;
    char b[20];
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        b[i] = *(p+i);
    }
    printf("%s",b);
    printf("\n%d",i);
    return 0;
}