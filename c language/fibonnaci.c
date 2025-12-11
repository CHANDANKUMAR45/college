#include<stdio.h>
void main(){
    int a=0,b=1,c,i,n;
    printf("enter number of term");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      //  printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d\t",a);
}