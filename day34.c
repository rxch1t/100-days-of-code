//Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int arr[50],n,pos,num;
    printf("enter number of elements: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    printf("enter position and number to insert: ");
    scanf("%d %d",&pos,&num);
    for(int i=n;i>=pos;i--) {
        arr[i]=arr[i-1];
    }

    arr[pos-1]=num;  
    n++;

    printf("array after the number is added:\n");
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}

//delete an element from an array.
#include <stdio.h>
int main() {
    int arr[50],n,pos;
    printf("enter number of elements: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    printf("enter position who's number you want to remove: ");
    scanf("%d",&pos);
    for(int i=pos-1;i<n-1;i++) {
        arr[i]=arr[i+1];
    }
    n--;

    printf("array after the number is removed:\n");
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}