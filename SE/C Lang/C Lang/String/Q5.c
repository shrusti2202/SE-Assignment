//5. Write a program in C to compare two strings without using string library functions.
#include<stdio.h>
#include <string.h>
int main(){
	char str1[50],str2[50];
	int i,flag=1;
	//input 1st string
	printf("Enter 1st string:");
	gets(str1);
	//input 2nd string
	printf("Enter 2nd string:");
	gets(str2);	
	//loop compare two strings 
	for(i=0;str1[i]!='\0' || str2[i]!='\0';i++){
		//check compare two strings or not
		if (str1[i] == str2[i]){
            flag = 0;
            break;
        }
	}
	// flag = 0 string are compare
	if(flag == 0){
		printf("The two strings are equal.");
	}
	else{
		printf("The two strings are not equal.");
	}
}
