#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    float r1,r2;
    printf("enter the the value a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d=(b^2)-4*a*c;
    if(d==0){
        printf("the are real and equal\n");
        r1=(-b+sqrt(d))/2*a;
         r2=(-b-sqrt(d))/2*a;
         printf("first root is : %f and second root is : %f",r1,r2);
    }
    else if(d>0){
        printf("the root real and unqual\n");
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("first root is : %f and second root is : %f",r1,r2);

    }
    else{
        printf("the roots are imagenary");
    }
    return 0;
}