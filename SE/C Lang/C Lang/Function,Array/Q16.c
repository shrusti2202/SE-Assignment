//16.Accept 5 numbers from user and perform sum of array
#include <stdio.h>
int main() {
    int i,arr[5], sum = 0;
    printf("Enter five numbers :\n");
    //loop to perform sum 
    for (i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of the array is %d.", sum);
}
