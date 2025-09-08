//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main() {
    int num;
printf("Enter an integer: ");
scanf("%d", &num);

if (num % 2 == 0){
    printf("%d is even.\n", num);}
else{
    printf("%d is odd.\n", num);}
return 0;
}

//write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0) {
       printf("number is positive.\n", num);
     } else {
        if (num < 0) {
            printf("number is negative.\n", num);
        } else {
            printf("number is zero.\n");
        }
    }
    return 0;
}