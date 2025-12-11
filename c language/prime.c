#include<stdio.h>
int main(){
  int n,i,a=0;
  printf("enter number");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    if(n%i==0){
      a++;
    }
  }
    if(a==2){
      printf("prime number");
    }
    else printf("not prime number");
  
  return 0;
}