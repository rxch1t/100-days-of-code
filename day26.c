/*
write a program to print the following pattern
Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/

#include <stdio.h>
int main() {
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
        printf(" ");
        }
    for(j=n-i+1;j<=n;j++){
        printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

/*
write a program to print the following pattern
*

*
*
*

*
*
*
*
*

*
*
*

*

*/

#include <stdio.h>
int main() {
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
