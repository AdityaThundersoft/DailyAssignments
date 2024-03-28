#include <stdio.h> 
#include <string.h> 

int main() 
{ 
	char str1[20];
    printf("enter a string: ");
    gets(str1); 
	char ch;
    printf("enter a char: " );
    scanf("%c",&ch); 
	char* result = strchr(str1, ch); 
	if (result != NULL) 
    { 
		printf("The character '%c' is found at index %ld\n",ch, result - str1); 
	} 
	else 
    { 
		printf("The character '%c' is not found in the string\n",ch); 
	} 

	return 0; 
}
// enter a string: Hello World
// enter a char: e
// The character 'e' is found at index 1
