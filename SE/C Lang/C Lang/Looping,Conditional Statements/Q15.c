//15.Calculate sum of 10 numbers using of while loop
#include<stdio.h>
int main(){
	int i=1,num,sum=0;	
	//input 10 numbers using while loop
	while(i<=10){
		printf("Enter num:",i);
		scanf("%d",&num);
		i++;
		//sum of all numbers
		sum +=num;
	}
	printf("sum of numbers are =%d",sum);
}
