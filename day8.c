// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main() {
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);

if (ch>='A' && ch<='Z') {
    printf("it is an upercase alphabet.\n");
}else if(ch>='a' && ch<='z') {
    printf("it is a lowercase alphabet.\n");
}else if(ch>='0' && ch<='9') {
    printf("it is a digit.\n");
}else{ 
    printf("it is a special character.\n");
}
    return 0;
}

// Write a program to input three numbers and find the largest among them using if–else
#include <stdio.h>
int main() {
    int n1, n2, n3;
    printf("enter three numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    
if(n1>=n2 && n1>=n3){
    printf("%d is the biggest number.\n",n1);
}else if(n2>=n1 && n2>=n3){
    printf("%d is the biggest number.\n",n2);
}else{
    printf("%d is the biggest number.\n",n3);
}
return 0; 
}
