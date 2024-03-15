//6. WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main(){
	int i,a=0,b=1,num;
	int c=a+b;
	//Accept the value.
	printf("Enter the value: ");
	scanf("%d",&num);
	printf("%d,%d,",a,b);
	//for loop for Fibonacci series
	for(i=3;i<=num;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d,",c);
	}
}
