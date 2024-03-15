//16.Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
int main(){
	int i=0,num,sum=0;
	printf("Enter a number :");
	scanf("%d",&num);
	//loop to find natural number
	while(i<=num){
		//find natural number
		sum = sum + i;
		i++;
}
	 printf("Sum of first %d natural number is : %d", num, sum);  
}
