//2. Write a program to make Simple calculator (to make addition, subtraction,
//multiplication, division and modulo)

#include <stdio.h>
int main() {
    char operator;
    int num1, num2, result;

    printf("Enter an operator (+, -, *, /, %): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
                result = num1 / num2;
    		break;
    	case '%':
                result = num1 % num2;
    		break;
	    default:
            printf("Invalid operator.\n");
    }

    // Output
    printf("Result:  %.2d\n", result);

  
}

