/*Write a program to print the following pattern:
*
**
***
****
*****
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
    return 0;
}

/*
Write a program to print the following pattern:
1
12
123
1234
12345
*/
#include <stdio.h>
int main() {
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
