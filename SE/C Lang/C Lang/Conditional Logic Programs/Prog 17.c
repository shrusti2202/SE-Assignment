//17.Write a C program to check whether a triangle can be formed with the given values for the angles.

#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter the three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180) {
        printf("Triangle can be formed with these angles.\n");
    } else {
        printf("Triangle cannot be formed with these angles.\n");
    }

    return 0;
}

