//11.Accept 5 names from user at run time.
#include <stdio.h>
int main(){
	int i;
	char name[10];
	//loop to enter name 5 times.
	for(i=1;i<=5;i++){
		printf("Enter your name:");
		scanf("%s",&name);	
		//accept name at run time
		printf("Your name %s\n",name);
	}
}
