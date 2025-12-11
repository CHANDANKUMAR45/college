#include<stdio.h>
void main(){
    int a[10],i,n,num,loc;
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("enter loc");
    scanf("%d",&loc);

    for(i=loc;i<=n;i++)
     a[i]=a[i+1];

     n=n-1;

     for(i=0;i<n;i++)
     printf("%d",a[i]);
}
