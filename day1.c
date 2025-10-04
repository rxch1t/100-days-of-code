// Write a program to input two numbers and display their sum.

#include<stdio.h>
int main() {
    int a, b, sum;
    printf("Enter both numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Sum is: %d\n", sum);
    return 0;
}

//WAP to input two numbers and display their sum, difference, product, and quo
#include <stdio.h>
int main() {
    int n1,n2,sum,dif,quo,pdt;
    printf("enter two numbers:");
    scanf("%d %d",&n1,&n2);

    sum=n1+n2;
    dif=n1-n2;
    quo=n1/n2;
    pdt=n1*n2;

    printf("sum=%d\n difference=%d\n quotient=%d\n product=%d\n",sum,dif,quo,pdt);
    return 0;
}
