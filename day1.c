// Write a program to input two numbers and display their sum.

#include<stdio.h>
int main() {
    int a, b, sum;
    printf("Enter both numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Sum is: %d\n", sum);
    return 0;
}
