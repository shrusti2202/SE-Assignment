//19.Calculate compound interest

#include<stdio.h>
int main(){
	float ci=0,amount,p;
	printf("Enter amount: ");
	scanf("%f",&amount);
	printf("Enter principle: ");
	scanf("%f",&p);
	ci =amount-p;
	printf("ci:%f",ci);
}
