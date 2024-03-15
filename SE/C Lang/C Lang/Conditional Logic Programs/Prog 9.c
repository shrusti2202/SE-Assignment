//9. C Program to Check Uppercase or Lowercase or Digit or Special Character

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase letter.\n", ch);
    }
    // lowercase
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter.\n", ch);
    }
    //  digit
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    }
    // special character
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}

