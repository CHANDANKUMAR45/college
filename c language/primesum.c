#include<stdio.h>
int main(){
    int i,j,n,m,a=0,sum=0;
    printf("enter first & last number");
    scanf("%d%d",&n,&m);
    printf("THE PRIME NUMBER IS \n");
    for(i=n;i<=m;i++){
        a=0;
    for(j=1;j<=i;j++){
        if(i%j==0){
            a++;
        }
    }
    if(a==2){
        printf("%d\t",i);
        sum=sum+i;
    }
    }
        printf("\nSUM : %d",sum);
        return 0;
    }
