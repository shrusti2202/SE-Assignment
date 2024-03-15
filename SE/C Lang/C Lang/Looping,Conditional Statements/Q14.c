//14.Accept 5 numbers from user and find those numbers factorials
#include <stdio.h>
int main() {
    int numbers[5];
    int i,j;
    // Accept 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }    
    // Calculate and display factorials
    printf("Factorials:\n");
    for (i = 0; i < 5; i++) {
        int num = numbers[i];
        int factorial = 1; 
        // Calculate factorial using loop
        for (j = 1; j <= num; j++) {
            factorial = factorial*j;
        }
        printf("%d! = %d\n", num, factorial);
    }
}
