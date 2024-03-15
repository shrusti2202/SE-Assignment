//12.Write a program in C to find the number of times a given word 'is' appears in 
//the given string.
#include<stdio.h>
#include<string.h>
int main(){
	char word[ ] = "is";
	char str[100],len;
	int i,count;
	//input string
	printf("Enter a string :");
	//gets and read a string
	gets(str);	
	len = strlen(str);
	for(i=0;i < len;i++){
		if (strstr(str + i, word) == str + i) {
            count++;
        }
	}
	printf("number of times a given word 'is' appear:%d",count);
}

