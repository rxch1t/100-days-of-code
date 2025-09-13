// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main() {
    int s1, s2, s3;
    printf("Enter all three sides of triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1+s2>s3 && s2+s3>s1 && s1+s3>s2 && s1,s2,s3>0) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
        return 0;
    }
    if (s1 == s2 && s2 == s3) {
        printf("The triangle is equilateral.\n");
    } else if (s1 == s2 || s2 == s3 || s1 == s3) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }
    return 0;
}

// Write a program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>
int main() {
    int day;
    printf("Enter a number (1-7): ");
    scanf("%d", &day);
    switch(day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid input\n");
    }
    return 0;
}
