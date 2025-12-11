#include<stdio.h>
void main(){
    int a[10],i,n,num,loc;
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("enter loc and num");
    scanf("%d%d",&loc,&num);

    for(i=n-1;i>=loc-1;i--)
     a[i+1]=a[i];

     a[loc-1]=num;
     n=n+1;

     for(i=0;i<n;i++)
     printf("%d",a[i]);
}
