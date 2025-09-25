//Write a program to print all factors of a given number.
#include <stdio.h>
int main() {
    int n,i;
    printf("enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);
    for (i=1; i<=n; i++) {
        if (n%i==0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main() {
    int a,b,hcf,i;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i=1; i<=a && i<=b; i++) {
        if (a%i==0 && b%i==0) {
            hcf = i;
        }
    }
    printf("HCF of %d and %d is: %d\n", a, b, hcf);
    return 0;
}