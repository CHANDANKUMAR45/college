/*create doubly link list append at last 
  */
#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *next,*prev;
    int data;
};
void main(){
    struct node *start=NULL,*new1,*t;
    int ch;
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
    printf("Do you want to continue : ");
    scanf("%d",&ch);
    if(ch==1)
    break;
    
}
while(start->next!=NULL){
    //printf("Element : %d\n",start->data);
    start=start->next;
}
while(start!=NULL){
    printf("Element : %d\n",start->data);
    start=start->prev;
}
}