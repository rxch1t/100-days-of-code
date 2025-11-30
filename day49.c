//Print the initials of a name.

#include <stdio.h>
#include <string.h>
int main(){
    char first[20],last[20];
    printf("enter your full name: ");
    scanf("%s %s %s",first,last);

    printf("%c.%c.%c.\n", first[0],last[0]);
    return 0;
}

//Print initials of a name with the surname displayed in full.


#include <stdio.h>
#include <string.h>
int main() {
    char first[20],last[20];
    printf("enter your full name: ");
    scanf("%s %s %s",first,last);

    printf("%c. %s\n", first[0],last);
    return 0;
}
