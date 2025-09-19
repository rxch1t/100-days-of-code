//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main() {
    double num1, num2;
    char operator;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers:");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 !=0)  
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else 
                printf("Error: Division by zero is invalid\n");
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}

//Write a program to print numbers from 1 to n.
#include <stdio.h>
int main() {
    int n;
    printf("enter value of n: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        printf("%d\n", i+1);
    }
    return 0;
}