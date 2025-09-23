//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main() {
    int num, i, b[32]; 

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }
    for (i = 0; num > 0; i++) {
        b[i] = num % 2;  
        num = num / 2;     
    }

    printf("Binary: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", b[i]);
    }
    printf("\n");

    return 0;
}

//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int n, rev=0, rem, in;
    printf("enter a number: ");
    scanf("%d", &n);
    in=n;

    while(n!=0) {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (in == rev) {
        printf("%d is a palindrome\n", in);
    } else {
        printf("%d is not a palindrome\n", in);
    }
    return 0;
}