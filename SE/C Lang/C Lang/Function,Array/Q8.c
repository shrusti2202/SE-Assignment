//8. WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<string.h>
int main(){ 
	char str[60];
	int count,len,i;	
	printf("Enter a string :");
	gets(str);
	printf("Reverse string is: %s\n",strrev(str));	
//	find string length
	len = strlen(str);
//	loop to devide string
	for(i=0;i<len/2;i++){
		if(str[i] == str[len-i-1])
		{
			count = 1;
		}
	}
//	 condition to check string is Palindrome or not Palindrome
	if(count){
		printf("%s is  Palindrome\n",str);
	}
	else{
		printf("%s is  not Palindrome",str);
	}
}
