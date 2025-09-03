//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main() { 
    float l, b, ar, p;

    printf("Enter length of rectangle: ");
    scanf("%f", &l);

    printf("Enter breadth of rectangle: ");
    scanf("%f", &b);
    
    ar = l * b;
    p = 2 * (l + b);

    printf("rectangle's area is: %.2f\n", ar);
    printf("rectangle's perimeter is: %.2f\n", p);

    return 0;
}


//Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main() {
    float r, area, circ;
    printf("Enter radius: ");
    scanf("%f", &r);

    area = 3.14 * r * r;
    circ = 2 * 3.14 * r;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circ);

    return 0;
}