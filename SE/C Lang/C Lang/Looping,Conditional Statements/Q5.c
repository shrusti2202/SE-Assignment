//5. WAP to print factorial of given number
#include<stdio.h>
int main(){
	int num,i,fact=1;
	//Accept number for factorial.
	printf("enter the num :");
	scanf("%d",&num);
	// for loop for factorial.
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("fact of %d is %d",num,fact);
}
