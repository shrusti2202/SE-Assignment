//33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int power1 = num; 
    int power2 = num * num; 
    int power3 = num * num * num; 

    printf("First power (N^1): %d\n", power1);
    printf("Second power (N^2): %d\n", power2);
    printf("Third power (N^3): %d\n", power3);

    return 0;
}

