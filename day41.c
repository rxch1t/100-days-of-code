//Count characters in a string without using built-in length functions.

#include <stdio.h>
int main() {
    char str[100];
    int count=0,i;
    printf("enter a string: ");
    fgets(str,sizeof(str),stdin);

    for (i=0;str[i]!='\0';i++) {
    count++;
    }

    printf("no. of characters: %d\n", count);
    return 0;
}

//Print each character of a string on a new line.

#include <stdio.h>
int main() {
    int str[100],i;
    printf("enter a string: ");
    for(int i=0;str[i]!='\0';i++){
        printf("%c\n",str[i]);
    }
    return 0;
}
