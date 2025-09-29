//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, first, last, digits, swapped;
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;
    digits = (int)log10(num);
    first = num / (int)pow(10, digits);

    swapped = last * (int)pow(10, digits) + (num % (int)pow(10, digits)) - last + first;
    printf("Number after swapping first and last digit: %d\n", swapped);
    return 0;
}

//perfect number
#include <stdio.h>
int main() {
    int n,i,sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n/2; i++) {
        if (n % i == 0)
            sum = sum+i;
    }
    if (sum == n)
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);
    return 0;
}