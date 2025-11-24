//Count vowels and consonants in a string.

#include <stdio.h>
int main() {
    char str[100];
    int vowels=0, consonants=0,i;
    printf("enter a string: ");
    for (i=0;str[i]!='\0';i++) {
    if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            vowels++;
            }else{
            consonants++;
            }
        }
    }
    printf("vowels: %d\n",vowels);
    printf("consonants: %d\n",consonants);
    return 0;
}

//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
int main() {
    char str[100];
    int i;
    printf("enter a string: ");
    for (i=0;str[i]!='\0';i++) {
        if (str[i]>='a' && str[i]<='z') {
        str[i]=str[i]-32;
        }
    }
    printf("uppercase string: %s\n", str);
    return 0;
}
