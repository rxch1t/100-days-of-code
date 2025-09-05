//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main() {
    float c , f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9/5) + 32;

    printf("Temperature in fahrenheit: %.2f\n", f);
    return 0;
}

//Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter both no.s: ");
    scanf("%d %d", &a, &b);
    
    temp = a;
    a = b;
    b = temp;

    printf("The no.s after swapping: a = %d, b = %d\n", a, b);
    return 0;

}

