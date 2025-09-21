//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main() {
    int n, sum = 0, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        sum = sum + (2*i - 1);
        printf("Sum of first %d odd numbers is: %d\n", i, sum);
    }
    return 0;
}

//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int n, pdt = 1, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        if(i%2==0) {
            pdt = pdt * i;
        }
        printf("Product of even numbers from 1 to %d is: %d\n", i, pdt);
    }
    return 0;
}

