//Write a C program to find total number of alphabets, digits or special character in a string.
#include <stdio.h>
#include <string.h>

int count(char* str)
{
    int count_a=0,count_n=0,count_sp=0;
    for(int i=0;i<strlen(str);i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') )
        {
            count_a++;
        }
        else if(str[i]>='0' && str[i]<='9')   
        {
            count_n++;
        }
        else count_sp++;
    }
    printf("Total number of alphabets are %d\n",count_a);
    printf("Total number of numbers are %d\n",count_n);
    printf("Total number of special charactrs are %d\n",count_sp);
}

int main()
{
    char str1[20];
    printf("enter str1: ");
    gets(str1);
    count(str1);
    return 0;
}
// enter str1: Aditya@/2002
// Total number of alphabets are 6
// Total number of numbers are 4
// Total number of special charactrs are 2