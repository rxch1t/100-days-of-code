//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d, root1, root2;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }

    d = b*b - 4*a*c;  

    if(d > 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and distinct.\n");
    }else if(d == 0) {
        root1 = -b / (2*a);
        printf("Roots are real and equal.\n");
    }else{
        printf("Roots are imaginary.\n");
    }
    return 0;
}




//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
#include<stdio.h>
int main() {
    float per;
    printf("Enter percentage: ");
    scanf("%f", &per);

    if(per >= 90 && per <= 100) {
        printf("Grade A\n");
    }else if(per >= 80 && per < 90) {
        printf("Grade B\n");
    }else if(per >= 70 && per < 80) {
        printf("Grade C\n");
    }else if(per >= 60 && per < 70) {
        printf("Grade D\n");
    }else if(per >= 50 && per < 60) {
        printf("Grade E\n");
    }else if(per >= 0 && per < 50) {
        printf("Grade F\n");
    }else {
        printf("Invalid percentage\n");}
    return 0;
}