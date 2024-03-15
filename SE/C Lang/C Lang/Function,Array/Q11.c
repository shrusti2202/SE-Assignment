//11.WAP to accept 5 numbers from user and display in reverse order using for 
//loop and array 
#include<stdio.h>
int main(){
	int i,num[5];	
	//loop to store elements in array
	for(i=0;i<5;i++){
		printf("Enter the number :");
		scanf("%d",&num[i]);
	}	
	//loop to reverse a numbers store in array elements
	printf("The entered numbers in reverse order are:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", num[i]);
    }
}
