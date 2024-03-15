//22. Accept 3 numbers from user using while loop and check each numbers 
//palindrome
//Done using for loop and function
#include<stdio.h>
int palindrome(int num){
		int orgnum=num;
		int revnum=0;
		//reverse number		
		for(;num>0;num/=10){
			int digit = num%10;
			revnum=revnum*10+digit;
		}
		return(orgnum == revnum);
	}
int main(){
	int number;
	// enter number
	printf("enter num :");
	scanf("%d",&number);
	//check number is palindrome or not
	if(palindrome(number)){
		printf("%d is a palin num",number);
	}
	else{
		printf("%d is not a palin num",number);
	}
}
