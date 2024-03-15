//28.Convert years into days and months

#include <stdio.h>

int main() {
    int years;
    int days, months;

    // Prompt user to input years
    printf("Enter number of years: ");
    scanf("%d", &years);

    // Convert years into days and months
    days = years * 365; // Assuming a year has 365 days
    months = years * 12; // Assuming a year has 12 months

    // Display the result
    printf("%d years is equivalent to %d days and %d months\n", years, days, months);

}

