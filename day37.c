//find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main() {
    int m[10][10],r,c,rowsum[10];
    printf("enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("enter the elements of the matrix:\n");
    for (int i=0;i<r;i++) {
        rowsum[i]=0; 
        for (int j= 0;j<c;j++) {
            scanf("%d", &m[i][j]);
            rowsum[i]+=m[i][j];
        }
    }
    printf("the sum of each row is:\n");
    for (int i=0;i<r;i++) {
    printf("Sum of row %d: %d\n",i+1,rowsum[i]);
    }
    return 0;
}

//find the transpose of a matrix.

#include <stdio.h>
int main() {
    int m[10][10],t,r,c;
    printf("enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("enter the elements of the matrix:\n");
    for (int i=0;i<r;i++) {
        for (int j= 0;j<c;j++) {
        scanf("%d", &m[i][j]);
        }
    }
    printf("the transpose of the matrix is:\n");
    for (int i=0;i<c;i++) {
        for (int j=0;j<r;j++) {
        printf("%d ",m[j][i]);
        }
    printf("\n");
    }
    return 0;
}
