#include<stdio.h>
int fib(int n);
int main(){
    int i,n,f;
    printf("enter number of term");
    scanf("%d",&n);
    for(i=0;i<n;i++){
       // f=fib(i);
        printf("%d ",fib(i));
    }
        return 0;
    }
    int fib(int n){
        if(n==0 || n==1)
        return n;
        else
        return fib(n-1)+fib(n-2);
    }
