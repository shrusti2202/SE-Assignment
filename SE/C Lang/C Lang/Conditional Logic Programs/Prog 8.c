//8. WAP to accept the height of a person in centimeters and categorize the person according to their height.

#include <stdio.h>

int main() {
    float height;

    printf("Enter your height in centimeters: ");
    scanf("%f", &height);

    if (height < 150) {
        printf("Short \n");
    } else if (height >= 150 && height < 170) {
        printf("Average \n");
    } else if (height >= 170 && height < 190) {
        printf("Tall \n");
    } else {
        printf("Very tall \n");
    }

    return 0;
}

