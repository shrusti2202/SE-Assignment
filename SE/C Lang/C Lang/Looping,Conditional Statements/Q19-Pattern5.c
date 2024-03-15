//19. pattern 5
//A 
//A B
//A B C
//A B C D
//A B C D E
#include<stdio.h>
int main()
{
	int i,j;
	char ch = 'A';	
	//for loop for row
	for(i=0;i<5;i++){
		//loop to print alphabets
		for(j=0;j<=i;j++)
		{
			printf("%c ", 'A' + j); 
		}
		printf("\n");
	}
}
