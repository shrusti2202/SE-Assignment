//22. Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P

#include <stdio.h>
#include <math.h>

// Function to calculate compound interest
float calculateCompoundInterest(float principal, float rate, int time) {
    float amount;
    amount = principal * pow(1 + rate / 100, time);
    return amount;
}

int main() {
    float principal, rate,amount,compoundInterest;
    int time;

	printf("Enter amount: ");
	scanf("%f",&amount);
	
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%d", &time);

    // Calculate compound interest
    compoundInterest =amount-principal;
    printf("Compound Interest = %.2f\n", compoundInterest);

    amount = calculateCompoundInterest(principal, rate, time);
    compoundInterest = amount - principal;

    // Output the result
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}

