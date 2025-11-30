/*
Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might
be repeated. You need to print the first and last occurrence of the target
and print the index of first and last occurrence. Print -1, -1 if the target is not present
*/

#include <stdio.h>
int main(){
    int n,target;
    printf("n: ");
    scanf("%d",&n);
    if(&n!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) { 
    printf("a[%d]: ",i); 
    scanf("%d",&a[i]); 
   }
    printf("target: ");
    scanf("%d",&target);
    int first=-1,last=-1,l=0,r=n-1,m;
    while(l<=r){ 
        m=(l+r)/2;
        if(a[m]==target){ 
        first=m; r=m-1;
        }else if(a[m]<target) 
        l=m+1; else r=m-1;
    }
    l=0; r=n-1;
    while(l<=r){ m=(l+r)/2;
        if(a[m]==target){
             last=m; l=m+1; 
        }else if(a[m]<target) 
        l=m+1; else r=m-1;
    }
    printf("first=%d last=%d\n",first,last);
    return 0;
}