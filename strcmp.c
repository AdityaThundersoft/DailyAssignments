// C program to demonstrate the strcmp() function 
#include <stdio.h> 
#include <string.h> 

int main() 
{ 
	char str1[] = "Hello";  
	char str2[] = "World"; 
	char str3[] = "Hello"; 
	int r1 = strcmp(str1, str2); 
	int r2 = strcmp(str2, str3); 
	int r3 = strcmp(str1, str1); 
	printf("Comparison of str1 and str2: %d\n", r1); 
	printf("Comparison of str2 and str3: %d\n", r2); 
	printf("Comparison of str1 and str1: %d\n", r3); 

	return 0; 
}
// Comparison of str1 and str2: -1
// Comparison of str2 and str3: 1
// Comparison of str1 and str1: 0
