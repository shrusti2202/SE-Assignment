//13.calculate the Factorial of a Given Number using while loop 
#include<stdio.h>
int main(){
	int i=1,num,fact;
	printf("Enter number:");
	scanf("%d",&num);	
	//while loop for finding factorial.
	while(i<=num){
		fact=fact*i;
		i++;
	}
	printf("factriol of %d is %d",num,fact);
}
