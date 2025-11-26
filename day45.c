//Count frequency of a given character in a string

#include <stdio.h>
#include <string.h>
int mian () {
    char str[100],ch;
    int i,n,count=0;
    printf("enter a string: ");
    scanf("%s",str);
    printf("enter a character to find frequency: ");
    scanf(" %c",&ch);
    for (i=0;i<n;i++) {
        if (str[i]==ch)
        count++;
    }
    }
    printf("frequency of %c is %d\n",ch,count);
    return 0;
}

//toggle case of each character in string

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i;
    printf("enter a string: ");
    scanf("%s",str);
    for (i=0;str[i]!='\0';i++) {
        if (str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;
        else if (str[i]>='A' && str[i]<='Z')
        str[i]=str[i]+32;
    }
    printf("toggled case string: %s\n", str);
    return 0;
}
