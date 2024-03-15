//27.Convert days into months

#include <stdio.h>

int main() {
    int days;
    float months;

    printf("Enter number of days: ");
    scanf("%d", &days);

    months = days / 30;

    printf("%d days is approximately %.2f months\n", days, months);

}


