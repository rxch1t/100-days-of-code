//Find the second largest element in an array.

#include <stdio.h>
int main() {
    int arr[50],n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int f,s;
    if(arr[0]>arr[1]) {
        f=arr[0];
        s=arr[1];
    }else{
        f=arr[1];
        s=arr[0];
    }
    return 0;
}

//rotate an array to the right by k positions.

#include <stdio.h>
int main() {
    int arr[50],n,k;
    printf("enter number of elements: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("enter number of positions to rotate: ");
    scanf("%d",&k);
    k=k%n;
    int x[50];
    for(int i=0;i<k;i++) {
        x[i]=arr[n-k+i];
    }
    for(int i=n-1;i>=k;i--) {
        arr[i]=arr[i-k];
    }
    for(int i=0;i<k;i++) {
        arr[i]=x[i];
    }
    printf("array after rotation:\n");
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}