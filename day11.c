//Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>
int main() {
    int mon;
    printf("Enter month number: ");
    scanf("%d", &mon);

    switch (mon) {
        case 1:  printf("January - 31 days\n"); break;
        case 2:  printf("February - 28 or 29 days\n"); break;
        case 3:  printf("March - 31 days\n"); break;
        case 4:  printf("April - 30 days\n"); break;
        case 5:  printf("May - 31 days\n"); break;
        case 6:  printf("June - 30 days\n"); break;
        case 7:  printf("July - 31 days\n"); break;
        case 8:  printf("August - 31 days\n"); break;
        case 9:  printf("September - 30 days\n"); break;
        case 10: printf("October - 31 days\n"); break;
        case 11: printf("November - 30 days\n"); break;
        case 12: printf("December - 31 days\n"); break;
        default: printf("Invalid month number! Please enter 1-12.\n");
    }
}

//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() {
    float cp, sp, p, l;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        p = sp - cp;
        printf("Profit Percentage: %.2f\n",(p/cp) * 100);
    } else if (cp > sp) {
        l = cp - sp;
        printf("Loss Percentage: %.2f\n",(l/cp) * 100);
    } else {
        printf("No profit, no loss.\n");
    }
    return 0;
}
