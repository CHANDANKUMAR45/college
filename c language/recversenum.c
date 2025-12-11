#include<stdio.h>
int main(){
    int num,i,rem,sum=0;
    printf("enter number");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    
    printf("%d",sum); 
      /*

    for(i=num;i>0;i=i/10){
rem=i%10;
sum=sum*10+rem;
    }
    */
}