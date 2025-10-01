//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main() {
    int n, i;
    float sum;;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (2*i)/(4*i - 1);
    }
    printf("Sum of the series up to %d terms is: %.2f\n", n, sum);
    return 0;
}



/*
wap to to print the following pattern:
*****
*****
*****
*****
*****
*/

#include <stdio.h>
int main() {
    int n=5, i, j;
    for (i = 1; i <= n; i++) {      
        for (j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
     return 0;
}