/*Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.
*/

#include <stdio.h>
int main() {
    int days,fine = 0;

    printf("Enter the number of days late: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine. Book returned on time.\n");
    }else if (days <= 5) {
        fine = days * 2;
        printf("Fine = ₹%d\n", fine);
    }else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine = ₹%d\n", fine);
    }else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine = ₹%d\n", fine);
    }else {
        printf("Membership Cancelled.\n");
    }
    return 0;
}

/*
Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit 
*/

#include <stdio.h>
int main() {
    int units,bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 0) {
        printf("Invalid input! Units must be positive.\n");
    }else if (units <= 100) {
        bill = units * 5;
    }else if (units <= 200) {
        bill = (100 * 5) + (units-100) * 7;
    }else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + (units-200) * 10;
    }else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units-300) * 12;
    }
    if (units > 0) {
        printf("Total Electricity Bill = ₹%d\n", bill);
    }
    return 0;
}

