//Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
int main(){
    char s1[100],s2[100];
    int count[256]={0};
    scanf("%s",s1);
    scanf("%s",s2);
    if(strlen(s1)!=strlen(s2)){
        printf("Not anagrams");
        return 0;
    }
    for(int i=0;s1[i]!='\0';i++) count[(unsigned char)s1[i]]++;
    for(int i=0;s2[i]!='\0';i++) count[(unsigned char)s2[i]]--;
    for(int i=0;i<256;i++)
        if(count[i]!=0){
         printf("Not anagrams");
        return 0;
        }
    printf("Anagrams");
    return 0;
}

//Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
int main(){
    char s[200],w[50],lngst[50];
    int i=0,j=0,max=0;
    fgets(s,sizeof(s),stdin);
    while(s[i]!='\0'){
        if(s[i]!=' '&&s[i]!='\n') w[j++]=s[i];
        else{
        w[j]='\0';
        if(j>max){max=j;strcpy(lngst,w);}
        j=0;
        }
        i++;
    }
    w[j]='\0';
    if(j>max) strcpy(lngst,w);
    printf("%s",lngst);
    return 0;
}
