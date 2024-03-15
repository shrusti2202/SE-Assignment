//4. WAP to make simple calculator (operation include Addition, Subtraction,
//Multiplication, Division, modulo) using conditional statement

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

