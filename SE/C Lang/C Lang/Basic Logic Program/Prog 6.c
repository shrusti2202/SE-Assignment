//6. Find area of Triangle Formula : A = 1/2 × b × h

#include<stdio.h>
int main(){
	float area,b,h;
	printf("enter base\t");
	scanf("%f",&b);
	printf("enter height\t");
	scanf("%f",&h);
	
	area =  (b * h)/2;
	printf("Area of Triangle is : %0.2f",area);
}
