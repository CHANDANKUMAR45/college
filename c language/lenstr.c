#include<stdio.h>
#include<string.h>
void main(){
    char i,s[50];
    int len=0;
    printf("enter string");
    fgets(s,100,stdin);
    
len=strlen(s);

    printf("LENGTH IS : %d",len);
}