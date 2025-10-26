//read and print a matrix

#include <stdio.h>
int main() {
    int m[10][10],r,c;
    printf("enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("enter the elements of the matrix:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&m[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            printf("%d ",m[i][j]);
        }
    printf("\n");
    }
    return 0;
}

//find the sum of all elements in a matrix

#include <stdio.h>
int main() {
    int m[10][10],r,c,sum=0;
    printf("enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("enter the elements of the matrix:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&m[i][j]);
            sum=sum+m[i][j];
        }
    }
    printf("the sum of all elements in the matrix is: %d\n",sum);
    return 0;
}
