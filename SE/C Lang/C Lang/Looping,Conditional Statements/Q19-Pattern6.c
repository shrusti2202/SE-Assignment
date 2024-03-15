//19. pattern 6
//*
//* *
//* * *
//* * * *
//* * * * *
//* * * *
//* * *
//* *
//*
#include<stdio.h>
int main(){	
	int i,j;	
	//loop to print row for upper half
	for(i=0;i<=5;i++){
		//loop to Print a half upper *
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}	
	//loop to print row lower half
	for(i=5;i>=0;i--)
	{
		//loop to print a half lower *
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
