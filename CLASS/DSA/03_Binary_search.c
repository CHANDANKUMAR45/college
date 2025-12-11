#include<stdio.h>
void main(){
    int lb,ub,mid,i,j,n,temp;
    int a[]={65,55,45,35,75,15,95,85,5,25};
    lb=0;
    ub=10;
    //printf("enter the array");
    //for(i=lb;i<ub;i++)
    //scanf("%d",&a[i]);

    for(i=lb;i<ub;i++){
        for(j=lb;j<ub-1-i;j++){ // sort the array 
            if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
    printf("The sorted element are \n");
    for(i=lb;i<ub;i++)
    printf("%d  ",a[i]);
    mid=(lb+ub)/2;
    printf("\n enter element to find : ");
    scanf("%d",&n);
    while(n!=a[mid] && lb<=ub){
        if(n>a[mid])
        lb=mid+1;
        if(n<(a[mid]))
        ub=mid-1;
        mid=(lb+ub)/2;

        }
        if(n==a[mid])
        printf("yes found in %d",mid+1);
        else
        printf("no element is found");

}