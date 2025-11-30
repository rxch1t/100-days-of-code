/*
Write a Program to take a sorted array arr[] and an integer x as input,
 find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. 
 This element is called the ceil of x. If such an element does not exist, print -1.
 Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence
*/

#include <stdio.h>
int main(){
    int n,x;
    printf("enter n: ");
    if(scanf("%d",&n)!=1)
    return 0;
    int a[n];
    for(int i=0;i<n;i++){ 
        printf("a[%d]: ",i);
        scanf("%d",&a[i]); 
    }
    printf("enter x: ");
    scanf("%d",&x);
    int ans=-1,l=0,r=n-1,m;
    while(l<=r){
        m=(l+r)/2;
        if(a[m]>=x){ ans=m; r=m-1; 
        }else 
        l=m+1;
    }
    printf("ceil_index=%d\n",ans);
    return 0;
}
