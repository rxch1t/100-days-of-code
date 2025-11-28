//Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>
int main() {
    char s1[100],s2[100],t[200];
    scanf("%s",s1);
    scanf("%s",s2);
    if(strlen(s1)!=strlen(s2)){printf("Not rotation");return 0;}
    strcpy(t,s1);
    strcat(t,s1);
    if(strstr(t,s2)) printf("Rotation");
    else printf("Not rotation");
    return 0;
}

//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void rev(char s[],int l,int r){
    while(l<r){
    char t=s[l];
    s[l]=s[r];
    s[r]=t;
    l++;r--;
    }
}

int main(){
    char s[200];
    fgets(s,sizeof(s),stdin);
    int i=0,start=0;
    while(s[i]!='\0'){
        if(s[i]==' '||s[i]=='\n'){
        rev(s,start,i-1);
        start=i+1;
        }
        i++;
    }
    printf("%s",s);
    return 0;
}
