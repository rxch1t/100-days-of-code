//write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main() {
    int yr;
    printf("Enter a year: ");
    scanf("%d", &yr);

    if((yr % 400 == 0) || ( yr % 400 == 0 && yr % 100 != 0)) {
        printf("%d is a leap year.\n", yr);
    } else {
        printf("%d is not a leap year.\n", yr);
    }
    return 0;
}

//Write a program to input a character and check whether it is a vowel or consonant using if–else
#include <stdio.h>
int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }
    return 0;
}