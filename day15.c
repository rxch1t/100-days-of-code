//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main() {
    int n, f=1;
    printf("enter a number: ");
    scanf("%d", &n);
    
    for (int i=1; i<=n; i++) {
        f=f*i;
        printf("factorial of %d is %d\n", n, f);
    }
    return 0;
}

//Write a program to reverse a given number.
#include <stdio.h>
int main() {
    int n, rem, rev=0;
    printf("enter a number: ");
    scanf("%d", &n);

    while(n!=0) {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reversed number is %d\n", rev);
    return 0;
}