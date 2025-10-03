/*
5
45
345
2345
12345
*/
#include <stdio.h>
int main() {
    int i,j,n=5;
    for(i=1;i<=n;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

/*
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>
int main() {
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("",j);
        }
    for(j=1;j<=i;j++){
            printf("%d",j);
        }
    printf("\n");
    }
    return 0;
}