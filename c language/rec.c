#include<stdio.h>"?>,  

void coun(int n,int m);
void main(){
int m;
    printf("enter number");
    scanf("%d",&m); 
    coun(1,m);

}
void coun(int n,int m){
    
    if(n<=m){
    printf("%d ",n);
    coun(n+1,m);
    }
}