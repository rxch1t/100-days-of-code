//strong number
#include <stdio.h>
int main() {
    int n, copy, digit, sum = 0, fact;
    printf("Enter a number: ");
    scanf("%d", &n);

    copy = n;
    while (copy > 0) {
        digit = copy % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact= fact*i;
        }

        sum= sum+fact;  // add factorial to sum
        copy/= 10;   // move to next digit
    }
    if (sum == n)
        printf("%d is a strong number.\n", n);
    else
        printf("%d is not a strong number.\n", n);

    return 0;
}

//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() {
    int n, i;
    float sum;;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum +(2*i - 1)/(2*i);
    }
    printf("Sum of the series up to %d terms is: %.2f\n", n, sum);
    return 0;
}