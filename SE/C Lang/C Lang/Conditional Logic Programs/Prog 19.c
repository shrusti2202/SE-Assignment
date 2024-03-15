//19.Write a program in C to calculate and print the electricity bill of a given 
//customer. The customer ID, name, and unit consumed by the user should 
//be captured from the keyboard to display the total amount to be paid to the 
//customer. The charge are as follow :
//	
//	 	Unit  						Charge/unit
//	 upto 350  							@1.20
//	 350 and above but less than 600  	@1.50
//	 600 and above but less than 800  	@1.80
//	 800 and above  					@2.00
//	 
//If bill exceeds Rs. 800 then a surcharge of 18% will be charged and 
//the minimum bill should be of Rs. 256/-


#include <stdio.h>

int main() {
    int customerId, units;
    char name[50];

    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    printf("Enter Customer Name: ");
    scanf("%s", name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    float chargePerUnit, billAmount, surcharge = 0;
    if (units <= 350)
        chargePerUnit = 1.20;
    else if (units <= 600)
        chargePerUnit = 1.50;
    else if (units <= 800)
        chargePerUnit = 1.80;
    else
        chargePerUnit = 2.00;

    billAmount = units * chargePerUnit;

    //  bill exceeds Rs. 800
    if (billAmount > 800) {
        surcharge = billAmount * 0.18;
        billAmount += surcharge;
    }

    // minimum bill of Rs. 256
    if (billAmount < 256)
        billAmount = 256;

    printf("\nCustomer ID: %d\n", customerId);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Bill Amount: Rs. %.2f\n", billAmount);

    return 0;
}

