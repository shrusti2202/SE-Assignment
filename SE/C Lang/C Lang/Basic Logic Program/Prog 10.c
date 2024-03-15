//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
int main(){
	float prism,l,w,h;
	printf("enter length : \t");
	scanf("%f",&l);
	printf("enter width : \t");
	scanf("%f",&w);
	printf("enter height : \t");
	scanf("%f",&h);
	
	prism =  2*((w*l)+(h*l)+(h*w));
	printf("Area of rectangular prism is : %0.2f",prism);
}
