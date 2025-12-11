#include<stdio.h>
int main(){
    char p;
    int a,b;
     printf("enter opration\n");
    scanf("%c",&p);
    
    printf("enter first number");
    scanf("%d",&a);
    printf("%c",p);
    printf("enter second number");
    scanf("%d",&b);
   
    switch(p){
    case '+' : 
    printf("result =%d",a+b);
    break;
    case '-' : 
    printf("result =%d",a-b);
    break;
    case '*' : 
    printf("result =%d",a*b);
    break;
    case '/' :
     printf("result =%d",a/b);
    break;
    default  :
     printf("enter valid opration");
    }
    
    return 0;
}