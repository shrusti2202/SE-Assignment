//24.Accept the input month number and print number of days in that month.

#include <stdio.h>

int main() {
    int monthNumber, days;

    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    switch(monthNumber) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = 28; 
            break;
        default:
            printf("Invalid month number entered.\n");
            return 1;
    }

    printf("Number of days in month %d: %d\n", monthNumber, days);

    return 0;
}

