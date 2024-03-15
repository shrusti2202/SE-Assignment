//4. Write a program in C to count the total number of words in a string.
#include<stdio.h>
#include <string.h>
int main(){
	char str[40];
	int i,words=1;
	//input string
	printf("Enter a string :");
	gets(str);
	//loop to count the total number of words in a string
	for(i=0;str[i] !='\0';i++){
		//check the white space and seprate the word
		if(str[i] == ' '){
			words++;
		}
	}
	//print the number of word in string
	printf("The total number of words in the string is %d.", words);
}
