//26.Convert temperature Fahrenheit to Celsius


#include<stdio.h>
int main(){
	float fan,cal=0;
	printf("Enter fan value : ");
	scanf("%f",&fan);
	cal=0.55*(fan-32);
	printf("%f",cal);
}
