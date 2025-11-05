//Add two matrices 

#include <stdio.h> 
int main() {
    int a[10][10],b[10][10],sum[10][10],r,c,i,j;
    
    pritnf("enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("enter elements of first matrix:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
        scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements of second matrix:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
        scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
        sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("sum of the two matrices:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
        printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//check if a matrix is symmmetr

#include <stdio.h>
int main () {
    int a[10][10],r,c,i,j,trans[10][10],x=1;
    printf("enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("enter elements of matrix:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
        trans[j][i]=a[i][j];
        }
    for (i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            if(a[i][j]!=trans[i][j]) {
            x=0;
            printf("matrix is not symmetric\n");
            }else if(x==1)
            printf("matrix is symmetric\n");
        return 0;
        }
    }
    }
}