#include<stdio.h>
int fact(int);
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    printf("FACTORIAL = %d",fact(n));
}
int fact(int n){
    if(n==0 || n==1){
        return 1;
        
    }
    else{
        return n*fact(n-1);
    }
}