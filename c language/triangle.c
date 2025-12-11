#include<stdio.h>
void main(){
    int n,i,j,k;
    printf("enter no of line");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=n;k>=i;k--){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1 || i==n )
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
// https://www.youtube.com/live/YQU6AjF_ljA?feature=share