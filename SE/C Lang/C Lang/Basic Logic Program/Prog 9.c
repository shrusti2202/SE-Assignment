//9. Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>
int main(){
	float a,b,c,p;
	printf("enter first value : \t");
	scanf("%f",&a);
	printf("enter second value : \t");
	scanf("%f",&b);
	printf("enter third value : \t");
	scanf("%f",&c);
	
	p =  a + b + c;
	printf("circumference of Triangle is : %0.2f",p);

}
