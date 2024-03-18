//WAP to find the first capital letter in a string using recursion.
#include <stdio.h>

void Firstcap(char s[],int n, int l)
{
    if(l<=n)
    {
        if(s[l]>='A' && s[l]<='Z')
        {
            printf("%c",s[l]);
        }
        else
        {
            Firstcap(s,n,l+1);
        }
   }
}

int main()
{
    char s1[50];
    printf("enter a string: ");
    gets(s1);
    int n = sizeof(s1)/sizeof(s1[0]);
    Firstcap(s1,n,0);
    return 0;
}
// enter a string: adiTya
// T