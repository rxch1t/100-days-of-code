//Reverse a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i,n;
    printf("enter a string: ");
    scanf("%s",str);

    x=strlen(str);
    for (i=0;i<x/2;i++) {
        char temp=str[i];
        str[i]=str[x-i-2];
        str[x-i-2]=temp;
    }
    printf("reversed string: %s\n", str);
    return 0;
}


//Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i,n;
    printf("enter a string: ");
    scanf("%s",str);

    x=strrev(str);
    for (i=0;i<x/2;i++) {
        char temp=str[i];
        str[i]=str[x-i-2];
        str[x-i-2]=temp;
    }
    if (str==strrev(str)) {
        printf("string is a palindrome\n");
    }else{
        printf("string is not a palindrome\n");
    }
    return 0;
}
