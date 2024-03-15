//24. 1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main(){
    int i,num,sum=0;
    //user input
    printf("Enter a number :");
    //read input
    scanf("%d",&num);
    //loop for sum of number 
    for(i=1;i<=num;i++){
        sum+=i;
    }
    //display sum
    printf("Sum: %d",sum);
}
