//12.Accept number of students from user. I need to give 5 apples to each student. How many apples are required?

#include<stdio.h>
int main(){
	int stud,total;
	printf("enter the Number of Students : \t");
	scanf("%d",&stud);
	
	total = stud * 5;
	printf("%d apples are required.",total);
}
