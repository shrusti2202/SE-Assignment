//15.Write a C program to determine eligibility for admission to a professional course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marksin Chem>=50 and Total in all three 
//subject >=190 or Total in Maths and Physics >=140 --------------------------------------Input the marks obtained in
//Physics :65 Input the marks obtained in Chemistry :51 Input the marksobtained in Mathematics :72 Total marks of Maths, 
//Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.

#include <stdio.h>

int main() {
    int phy_marks, chem_marks, math_marks, total_marks, total_math_phy;

    printf("Input the marks obtained in Physics : ");
    scanf("%d", &phy_marks);

    printf("Input the marks obtained in Chemistry : ");
    scanf("%d", &chem_marks);

    printf("Input the marks obtained in Mathematics : ");
    scanf("%d", &math_marks);

	total_marks=phy_marks+chem_marks+math_marks;
    printf("Total marks of Maths, Physics, and Chemistry : %d\n",total_marks);

	total_math_phy=phy_marks+math_marks;
    printf("Total marks of Maths and Physics : %d\n",total_math_phy);

    if (phy_marks >= 55 && chem_marks >= 50 && math_marks >= 65 && total_marks >= 190) {
        printf("The candidate is eligible.\n");
    } else if (math_marks + phy_marks >= 140) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}

