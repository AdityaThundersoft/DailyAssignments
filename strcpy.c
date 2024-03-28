// C program to illustrate the use of strcpy() 
#include <stdio.h> 
#include <string.h> 

int main() 
{ 
	char str1[20];
    printf("enter a string: ");
    gets(str1); 
	char str2[20];  
	strcpy(str2, str1); 
	printf("Source: %s\n", str1); 
	printf("Destination: %s\n", str2); 

	return 0; 
}
