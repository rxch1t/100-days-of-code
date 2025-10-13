//merge two arrays.

#include <stdio.h>
int main(){
    int n1,n2,n3,i,j;
    printf("enter size of first and second array: ");
    scanf("%d %d",&n1,&n2);

    int arr1[n1], arr2[n2], arr3[n1+n2];
    for (int i=0;i<n1;i++) 
    {
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr1[i]);
    }
    for (int i=0;i<n2;i++) 
    {
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr2[i]);
    }
    n3=n1+n2;
    for (int i=0;i<n1;i++) 
    {
        arr3[i]=arr1[i];
    }

    for (int i=0;i<n2;i++) 
    {
        arr3[n1+i]=arr2[i];
    }
    printf("\nMerged array:\n");
    for (int i=0;i<n3;i++) 
    {
        printf("%d",arr3[i]);
    }
    printf("\n");
    return 0;
}


//find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main() {
    int num,i;
    printf("enter an integer: ");
    scanf("%d",&num);

    if(num<0) {
        num=-num;
    }
    
    int maxd,maxc=0;
    for(i=0;i<=9;i++) {    
    int c=0,x;
    x=num;
    while(x>0) {
        if(x%10==i) {
        c++;
        }
        x=x/10;
        }
        if(c>maxc) {
        maxc=c;
        maxd=i;
        }
    }
    printf("digit %d occurs the most: %d times\n",maxd,maxc);
    return 0;
}