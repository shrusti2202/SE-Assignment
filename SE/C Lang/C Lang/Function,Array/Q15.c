//15.Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
int main()
{
	int j,i,num[5],temp;
	//loop to store array elements
	for(i=0;i<5;i++){
		printf("Enter array elements:");
		scanf("%d",&num[i]);
	}
	//loop for row
	for(i=0;i<5;i++){
			//loop for columns
			for(j=i+1;j<5;j++){
				//check and swap to ascending
				if(num[i] > num[j]){
					temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				}
			}
		}
	printf("ascending order or array elements\n");
	//loop to print and sort numbers to ascending  
	for(i=0;i<5;i++){
			printf("%d:",num[i]);
		}
}
