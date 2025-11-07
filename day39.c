//check if the elements on the diagonal of a matrix are distinct

#include <stdio.h>
int main() {
    int n,i,j,x=1;
    printf("enter size of matrix: ");
    scanf("%d",&n);
    int m[n][n];
    printf("enter elements of matrix:\n");
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
        scanf("%d",&m[i][j]);
        }
    }
    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
        if (m[i][i]==m[j][j]) {
        x=0;
        break;
        }
        }
    }
    if (x==1)
        printf("diagonal elements are distinct\n");
    else
        printf("diagonal elements are not distinct\n");
    return 0;
}


//find the sum of main diagonal elements for a square matrix

#include <stdio.h> 
int main () {
    int n,i,j,sum=0;
    printf("enter size of matrix: ");
    scanf("%d",&n);
    int m[n][n];
    printf("enter elements of matrix:\n");
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
        scanf("%d",&m[i][j]);
        }
    }
    for (i=0;i<n;i++) {
        sum=sum+m[i][i];
    }
    printf("sum of main diagonal elements=%d\n",sum);
    return 0;
}