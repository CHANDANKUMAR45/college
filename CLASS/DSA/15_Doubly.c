#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *next,*prev;
    int data;
};
void main(){
    struct node *start=NULL,*new1,*t,*del;
    int ch,count=0;
      while(1){
    new1=(struct node*)malloc(sizeof(struct node));
    printf("enter data : ");
    scanf("%d",&new1->data);
    new1->next=NULL;
    if(start==NULL){
        new1->prev=NULL;
        start=new1;
    }
    else{
        t=start;
        while(t->next!=NULL){
            t=t->next;
        }
        new1->prev=t;
        t->next=new1;
    }
    count++;
    printf("Do you want to continue : ");
    scanf("%d",&ch);
    if(ch==1)
    break;
}
printf("%d",count);
}