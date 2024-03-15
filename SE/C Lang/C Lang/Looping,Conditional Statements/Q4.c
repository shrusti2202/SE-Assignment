//4. WAP to print table up to given numbers
#include<stdio.h>
int main(){
	int i,num;	
	//Accept number for table
	printf("Enter a number:");
	scanf("%d",&num);
	//loop for multiplication.
	for(i=1;i<=10;i++){
		printf("%d * %d = %d \n",num,i,i*num);
	}
}
