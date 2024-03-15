//9. Write a program in C to find the maximum number of characters in a string.
#include<stdio.h>
#include<string.h>
int main(){
	char string[60];
	//input string
	printf("Enter a string :");
	//gets and read a string
	gets(string);	
	//print number of characters in string
	printf("maximum number of characters in a string:%d",strlen(string));
}
