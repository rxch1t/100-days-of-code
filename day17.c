//Armstrong number
#include <stdio.h>
int main() {
    int num, a,b,c,sum;
    printf("enter a three-digit number: ");
    scanf("%d", &num);

    a = num / 100;       
    b = (num / 10) % 10;  
    c = num % 10;         

   
    sum = (a*a*a) + (b*b*b) + (c*c*c);

    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}

//prime number
#include <stdio.h>

int main() {
    int n,i,p= 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        p = 0;
    } else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                p = 0;
                break;
            }
        }
    }
    if (p) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}