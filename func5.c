//WAP to reverse a string using recursion
#include <stdio.h>
#include <string.h>

void isPalindrome(char str[], int l)
{
    int n = strlen(str) - (l + 1);   
    if (str[l] == str[n]){        
        if (l + 1 == n || l == n)
        {
           printf("The entered word is a palindrome\n");
            return;
        }      
        isPalindrome(str, l + 1);
    }
    else
    {
        printf("The entered word is not a palindrome\n");
    }
}

int main()
{
    char s1[50];
    printf("enter a string");
    gets(s1);
    palind(s1,0);
    return 0;
}
// enter a string: Aditya
// The entered word is not a palindrome