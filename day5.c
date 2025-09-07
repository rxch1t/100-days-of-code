//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
int main () {
    float p , r , t;
    float si, ci, money;
    
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time in years: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;
    money = p * (1 + r / 100);
    ci = money - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);
    
    return 0;
}

//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main() {
    int sec, hr, min;
    printf("Enter time in seconds: ");
    scanf("%d", &sec);
   
    sec = sec % 60;
    hr = sec / 3600;
    min = (sec % 3600) / 60;

    printf("Time in hh:mm:ss format is %d:%d:%d\n", hr, min, sec);
    return 0;
}