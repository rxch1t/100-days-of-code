//Search for an element in an array using linear search.

#include <stdio.h>
int main() {
    int n,i,found=0,num;
    printf("enter no. of integers in array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d integers:\n",n);
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the no. to be searched: ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(arr[i]==num){
            found=1;
            break;
        }
    }
    if(found==1){
        printf("no. found at position %d",i+1);
    }else{
        printf("no. not found");
    }
    return 0;
}

//Reverse an array without taking extra space.

#include <stdio.h>
int main() {
    int arr[100],i,n;

    printf("enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element number %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nreversed array is\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
