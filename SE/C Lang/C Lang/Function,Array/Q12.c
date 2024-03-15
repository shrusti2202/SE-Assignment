//12.WAP to accept 5 students name and store it in array
#include<stdio.h>
int main(){
	int i;
	char str[5][20];
	//loop for five student names
	for(i=0;i<5;i++){
		printf("Enter Students Name : ");
		scanf("%s",&str[i]);
	}
	printf("\n");
	//loop to print name
	for(i=0;i<5;i++){
		printf("Names are : %s\n",str[i]);
	}
}
