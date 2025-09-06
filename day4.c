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

//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main()  {
    int n, sum = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        sum += i;
        printf("The sum of first %d natural numbers is: %d\n", n, sum);
        return 0;
    }    
}


