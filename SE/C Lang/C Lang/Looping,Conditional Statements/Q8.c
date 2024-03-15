//8. Write a program to find out the max from given number (E.g., No: -1562
//Max number is 6)
#include <stdio.h>

int main() 
{
	int i,max=0,num;
	//loop for 1 to 5 numbers.
	for(i=1;i<=5;i++){
		printf("Enter a number : ",i);
		scanf("%d",&num);
		//To find Maximum of given num
		if(max < num){
			max = num;
		}
	}
	printf("\n Max number is = %d",max);
}
