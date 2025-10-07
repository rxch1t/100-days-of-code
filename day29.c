//Find the sum of array elements.

#include <stdio.h>
int main(){
    int n,i;
    printf("enter no. of integers in array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d integers for array:\n",n);
    
    int sum=0;
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
    }
    printf("sum of array elements is %d",sum);
    return 0;
}

//Find the maximum and minimum element in an array.

#include <stdio.h>
int main() {
    int n,i;
    printf("enter no. of integers in array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d integers for array:\n",n);
    int max=0,min=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
        max=arr[i];
        }
        if(arr[i]<min){
        min=arr[i];
        }
    }
    printf("maximum: %d\n minimum: %d",max,min);
    return 0;
}
