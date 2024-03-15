//26. WAP to show
//i. Monday to Sunday using switch case
//ii. Vowel or Consonant using switch case

#include<stdio.h>
int main(){
int option,day;
char vowels;
	printf("Enter option.\t");
	scanf("%d",&option);
	switch(option){
		
		case 'day' :
	printf("Enter no.\t");
	scanf("%d",&day);
	
	switch(day){
		
		case 0 :
			printf("Sunday");
			break;
		case 1 :
			printf("Monday");
			break;
		case 2 :
			printf("Tuesday");
			break;
		case 3 :
			printf("Wednesday");
			break;
		case 4 :
			printf("Thursday");
			break;
		case 5 :
			printf("Friday");
			break;
		case 6 :
			printf("Saturday");
			break;
		default :
			printf("invalid");
			break;	
	}
//			break;
			
		case 'vowels' :
	printf("Enter the Character : ");
	scanf("%c",&vowels);
	switch(vowels){
		case 'a' :
			printf("vowel");
			break;
		case 'e' :
			printf("vowel");
			break;
		case 'i' :
			printf("vowel");
			break;
		case 'o' :
			printf("vowel");
			break;
		case 'u' :
			printf("vowel");
			break;
		case 'A' :
			printf("vowel");
			break;
		case 'E' :
			printf("vowel");
			break;
		case 'I' :
			printf("vowel");
			break;
		case 'O' :
			printf("vowel");
			break;
		case 'U' :
			printf("vowel");
			break;
		default :
			printf("consonant");
			break;	
	}
			break;
		default :
			printf("invalid");
			break;	
	}
}
