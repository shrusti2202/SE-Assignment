//Q8 Write a program of structure employee that provides the following
//a. information -print and display empno, empname, address
//and age
#include<stdio.h>
int main(){
	char empname[200],address[200];
	int age;
	long long int empno;	
		//input number
		printf("Enter number:");
		scanf("%lld",&empno);		
		//input age
		printf("Enter Age:");
		scanf("%d",&age);		
		//input	name
		printf("Enter name:");
		scanf("%s",empname);		
		//input address
		printf("Enter address:");
		scanf("%s",address);		
		//user information
		printf("Employee information\n");
		printf("name: %s \n",empname);
		printf("number: %lld \n",empno);
		printf("age: %d \n",age);
		printf("address: %s \n",address);
}
