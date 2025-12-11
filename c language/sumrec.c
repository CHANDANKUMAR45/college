#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    printf("sum= %d",sum(n));
    return 0;
}
int sum(int n){
    if(n==0 || n==1)
    return n;
    else
    return n+sum(n-1);
}