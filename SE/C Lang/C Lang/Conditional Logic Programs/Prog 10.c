//10.WAP to check whether a number is negative, positive or zero.

#include <stdio.h>

int main() {
    int m;

    printf("Enter the value : ");
    scanf("%d", &m);

    if (m > 0) {
		printf("%d is positive",m);
    } 
	else if (m == 0) {
       	printf("%d is zero",m);
    } 
	else {
   		printf("%d is negative",m);
    }


}
