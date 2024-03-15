//23. C Program to Reverse a Number Using FOR Loop
#include <stdio.h>
int main() {
  int n, reverse = 0, remainder;
  //input integer.
  printf("Enter an integer: ");
  scanf("%d", &n);
  //for loop to reverse number
 for (;n > 0;) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n = n/10;
  }
  printf("Reversed number = %d", reverse);
}
