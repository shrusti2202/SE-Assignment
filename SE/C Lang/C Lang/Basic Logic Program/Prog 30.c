//30.WAP to convert years into days and days into years

#include <stdio.h>

int main() {
    int years, days;

    printf("Choose conversion:\n");
    printf("1. Years to days\n");
    printf("2. Days to years\n");
    printf("Enter your choice (1 or 2): ");
    int choice;
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            // Convert years into days
            printf("Enter number of years: ");
            scanf("%d", &years);
            days = years * 365; 
            printf("%d years is equivalent to %d days.\n", years, days);
            break;
        case 2:
            // Convert days into years
            printf("Enter number of days: ");
            scanf("%d", &days);
            years = days / 365; 
            printf("%d days is equivalent to %d years.\n", days, years);
            break;
        default:
            printf("Invalid choice. Please enter 1 or 2.\n");
    }

}

