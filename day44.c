//Count spaces, digits, and special characters in a string.

#include <stdio.h>
#include <string.h>
int main() {
    int sp=0,dig=0,spec=0,i;
    char str[100];
    printf("enter a string: ");
    scanf("%s",str);
    for (i=0;str[i]!='\0';i++) {
        if (str[i]==' ')
        sp++;
        else if (str[i]>='0' && str[i]<='9')
        dig++;
        else if ((str[i]>='!' && str[i]<='/') || (str[i]>=':' && str[i]<='@') ||
                 (str[i]>='[' && str[i]<='`') || (str[i]>='{' && str[i]<='~'))
        spec++;
    }
    printf("spaces: %d\n",sp);
    printf("digits: %d\n",dig);
    printf("special characters: %d\n",spec);
    return 0;
}


//Replace spaces with hyphens in a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i;
    printf("enter a string: ");
    scanf("%s",str);
    for (i=0;str[i]!='\0';i++) {
        if (str[i]==' ')
        str[i]='-';
    }
    printf("hyphens string: %s\n", str);
    return 0;
}
