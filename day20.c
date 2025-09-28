//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int n, rem, pdt=1, flag=0;
    printf("enter a number: ");
    scanf("%d", &n);

    while(n!=0) {
        rem=n%10;
        if (rem%2!=0) {
            pdt=pdt*rem;
            flag=1; 
        }
        n=n/10;
    }
    if (flag) {
        printf("product of odd digits is %d\n", pdt);
    } else {
        printf("No odd digits found.\n");
    }
    return 0;
}

//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    int n, rem, rev=0, place=1;
    printf("enter a binary number: ");
    scanf("%d", &n);

    while(n!=0) {
        rem=n%10;
        if (rem==0) {
            rem=1;
        } else if (rem==1) {
            rem=0;
        } else {
            printf("Invalid binary number.\n");
            return 0;
        }
        rev=rev+rem*place;
        place=place*10;
        n=n/10;
    }
    printf("1's complement is %d\n", rev);
    return 0;
}
