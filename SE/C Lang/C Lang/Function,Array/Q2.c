//2. WAP of Addition, Subtraction, Multiplication and Division using Switch
//case.(Must Be Menu Driven)
#include<stdio.h>
int main(){
	char opt;
	int n1,n2;
	float res;
	
	printf("choose the operation from (/,*,+,-): ");
	scanf("%c",&opt);
	printf("choose num1: ");
	scanf("%d",&n1);
	printf("choose num2: ");
	scanf("%d",&n2);
	
	switch(opt)
	{
		case'/':
			if(n2==0)
			{
				printf("denominator cannot be 0 enter another value:");
				scanf("%d",n2);
			}
			res = n1/n2;
			printf("division of %d and %d is: %.2f\n",n1,n2,res);
			break;
			
		case'*':
			res = n1*n2;
			printf("multiplication of %d and %d is: %.2f\n",n1,n2,res);
			break;
		
		case'+':
			res = n1+n2;
			printf("addition of %d and %d is: %.2f\n",n1,n2,res);
			break;
			
		case'-':
			res = n1-n2;
			printf("subtraction of %d and %d is: %.2f\n",n1,n2,res);
			break;
		
		default:
			printf("please check options");
	}
	return 0;
}
