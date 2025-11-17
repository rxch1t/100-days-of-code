//perform diagonal traversal of a matrix

#include <stdio.h>
int main() {
    int n,i,j;
    printf("enter size of matrix: ");
    scanf("%d",&n);
    int m[n][n];
    printf("enter elements of matrix:\n");
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
        scanf("%d",&m[i][j]);
        }
    }
    printf("diagonal traversal of matrix:\n");
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
        if (i==j || i+j==n-1) {
        printf("%d ",m[i][j]);
        }
        }
    }
    printf("\n");
    return 0;
}

//multiply two matrices

#include <stdio.h>
int main() {
    int r1,c1,r2,c2,i,j,k;
    printf("enter rows and columns of first matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("enter rows and columns of second matrix: ");
    scanf("%d %d",&r2,&c2);
    if (c1!=r2) {
        printf("matrix multiplication not possible\n");
        return 0;
    }
    int m1[r1][c1],m2[r2][c2],m3[r1][c2];
    printf("enter elements of first matrix:\n");
    for (i=0;i<r1;i++) {
        for (j=0;j<c1;j++) {
        scanf("%d",&m1[i][j]);
        }
    }
    printf("enter elements of second matrix:\n");
    for (i=0;i<r2;i++) {
        for (j=0;j<c2;j++) {
        scanf("%d",&m2[i][j]);
        }
    }
    for (i=0;i<r1;i++) {
        for (j=0;j<c2;j++) {
        m3[i][j]=0;
        for (k=0;k<c1;k++) {
        m3[i][j]+=m1[i][k]*m2[k][j];
        }
        }
    }
    printf("resultant matrix after multiplication:\n");
    for (i=0;i<r1;i++) {
        for (j=0;j<c2;j++) {
        printf("%d ",m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
