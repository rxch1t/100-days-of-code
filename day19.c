//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main() {
    int a,b,lcm,i;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i=1; i<=a*b; i++) {
        if (i%a==0 && i%b==0) {
            lcm = i;
            break;
        }
    }
    printf("LCM of %d and %d is: %d\n",a,b,lcm);
    return 0;
}

//Write a program to find the sum of digits of a number.
#include<stdio.h>
int main() {
    int a, b, sum;
    printf("Enter both numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Sum is: %d\n", sum);
    return 0;
}