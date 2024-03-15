//7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include <stdio.h>

int main() {
  int n, reverse = 0, remainder;
  //input integer.
  printf("Enter an integer: ");
  scanf("%d", &n);
  //while loop to reverse number
  while (n > 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n = n/10;
  }
  printf("Reversed number = %d", reverse);
}
