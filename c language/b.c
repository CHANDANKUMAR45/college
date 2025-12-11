#include<stdio.h>
int fibon(int n);
int main(){
    int i,n,c,f;
    printf("enter number of term");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d\t",fibon(i));

    }
    return 0;
}

   int fibon(int n){
        if(n==0 || n==1){
            return n;
        }
        else{
            return fibon(n-1)+fibon(n-2);
        }
    }

