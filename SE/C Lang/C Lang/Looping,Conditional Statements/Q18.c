//18.Write a C Program to Print the Multiplication Table of N
//i. E.g. 5 * 1 = 5
//ii. 5 * 2 = 10 
//1. .
//2. .
//iii. 5 * 10 = 50
#include<stdio.h>
int main(){
	int i=1,num;
	printf("Enetr a number :",i);
	scanf("%d",&num);
	//loop to print 1 to 10 num.
	while(i<=10){
		//print table 
		printf("%d * %d = %d\n",num,i,num*i);
		i++;
	}
}
