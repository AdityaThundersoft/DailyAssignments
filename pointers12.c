//Write a C program to compare two strings using pointers.
#include <stdio.h>
int main()
{
    int count = 0,i=0,flag =0;
    char str1[50],str2[50];
    printf("Enter string1 : ");
    gets(str1);
    printf("Enter string2 : ");
    gets(str2);
    while(*(str1+i) != '\0' || *(str2+i)!='\0')
    {
        if  (*(str1+i) != *(str2+i))
        {
            flag =0;
            break;
        }
        else
        {
            flag++;
             i++;
            continue;
           
        }
        
    }
    if(flag == 0)
    printf("not same");
    else
    printf("same");

}
// Enter string1 : Aditya
// Enter string2 : Aditya
// same
// Enter string1 : Aditya
// Enter string2 : AdiTya
// not same