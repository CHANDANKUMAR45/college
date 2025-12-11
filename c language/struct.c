#include<stdio.h>
struct student{
    char name[50];
    int rollno;
    char add[50];
    float mark;

}x;
void main(){
    printf("enter all info");
    scanf("%s%d%s%f",&x.name,&x.rollno,&x.add,&x.mark);
    printf(" NAME :%s\n ROLL NO : %d\n ADDRESS : %s\n MARKS : %f\n",x.name,x.rollno,x.add,x.mark);

}