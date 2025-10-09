//Count even and odd numbers in an array.

#include <stdio.h>
int main() {
    int n,i,odd=0,even=0;
    printf("enter no. of integers in array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d integers:\n ",n);
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("even=%d\n odd=%d\n",even,odd);
    return 0;
}

//Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
    int n,i,pos=0,neg=0,zer=0;
    printf("enter no. of integers in array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d integers:\n ",n);
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>0){
            pos++;
        }else if(arr[i]<0){
            neg++;
        }else{ 
            zer++;
        }
    }
    printf("positive=%d\n negative=%d\n zeroes=%d\n",pos,neg,zer);
    return 0;
}
