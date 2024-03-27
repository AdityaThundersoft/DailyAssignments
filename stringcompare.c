#include <stdio.h>
#include <string.h>

void compare(char* str1, char* str2)
{
    int flag;
    if(strlen(str1)!=strlen(str2))
    {
        printf("two strings are not equal");
        return;
    }
    else
    {
        for(int i=0;i<strlen(str1);i++)
        {
            if(str1[i]==str2[i])
            {
                flag = 0;
                continue;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1) printf("the 2 strings are not equal");
        else printf("The 2 strings are equal");
    }
}

int main()
{
    char str1[20];
    printf("enter str1: ");
    gets(str1);
    char str2[20];
    printf("enter str2: ");
    gets(str2);
    compare(str1,str2);
    return 0;
}
// enter str1: Hello
// enter str2: Helle
// the 2 strings are not equal
// enter str1: Hello World
// enter str2: Hello World
// The 2 strings are equal
