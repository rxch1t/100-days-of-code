//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main() {
    int n,i,j;
    printf("enter value for n: ");
    scanf("%d",&n);
    printf("prime numbers from 1 to %d are:\n",n);

    for(i=2,i<=n,i++) {
         for (j=2;j<i;j++) {
            if (i%j==0) {
                break;
            }
        }
    if(j==i) {
        printf("%d\n",i);
    }
    }
    return 0;   
}

// read and print elements of a one-dimensional array.

#include <stdio.h>
int main() {
    int n,i;
    printf("enter no. of integers in array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d integers:\n ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the integers in the array are:\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
