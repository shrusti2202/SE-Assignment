//17. Calculate person’s insurance premium based on salary

#include<stdio.h>
int main(){
	float salary,years,premium;
	printf("Enter your salary:");
 	scanf("%d", &salary);
 
 	printf("Enter life insurance policy term(in years):");
 	scanf("%d", &years);
 	
 	printf("Your Monthly Premium    : %8.2f\n", salary/(years*12));
}
