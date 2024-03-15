//7. WAP Find out length of string without using inbuilt function
#include<stdio.h>
#include<string.h> 
int main(){
	char str1[100];
	int len=0;
	printf("Enter the string : ");	
	// to get mutiline string input from user
	gets(str1);
	// return length of string 	
	len=strlen(str1); 	
	printf("Length : %d\n",len);	
}
