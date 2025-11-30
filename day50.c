//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>
int main () {
    char date[11];
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", date);
    if(strlen(date)!=10 || date[2]!='/' || date[5]!='/') {
        printf("Invalid format\n");
        return 1;
    day=(date[0]-'0')*10 + (date[1]-'0');
    month=(date[3]-'0')*10 + (date[4]-'0');
    year=(date[6]-'0')*1000 + (date[7]-'0')*100 + (date[8]-'0')*10 + (date[9]-'0');

    switch(month) {
        case 1:  printf("January\n"); break;
        case 2:  printf("February\n"); break;
        case 3:  printf("March\n"); break;
        case 4:  printf("April\n"); break;
        case 5:  printf("May\n"); break;
        case 6:  printf("June\n"); break;
        case 7:  printf("July\n"); break;
        case 8:  printf("August\n"); break;
        case 9:  printf("September\n"); break;
        case 10: printf("October\n"); break;
        case 11: printf("November\n"); break;
        case 12: printf("December\n"); break;
        default:
            printf("Invalid month\n");
    }
    return 0;
}
}

//Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("enter a string: ");
    int n=strlen(str);
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
        for(int k=i;k<=j;k++) {
        printf("%c",str[k]);
        }
        printf("\n");
        }
    }
    return 0;
}