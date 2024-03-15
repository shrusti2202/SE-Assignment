//1. Write a program in C to find the length of a string without using library functions.
#include<stdio.h>
#include <string.h>
int main()
{
	char str[40];
	int i,length=0;
	//input string
	printf("Enter a string :");
	//gets and read a string
	gets(str);
	//loop to count the length of string
	for(i=0;str[i] !='\0';i++){
		length++;
	}
	//print the lenght of string
	printf("The length of a string is: %d",length);
}
