/*deleting in doubly link list
create doubly link list append at last */
#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *next,*prev;
    int data;
};
void main(){
    struct node *start=NULL,*new1,*t,*del;
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
int loc,i;
printf("Enter loc ");
scanf("%d",&loc);
if(loc==1){
    del=start;
    start=start->next;
    start->prev=NULL;
    free(del);
}
else{
    start=t;
    for(i=0;i<loc-2;i++){
        t=t->next;
    }
    t->next=t->next->next;
    t->next->prev=t;
    del=t->next;
    free(del);
}
while(start!=NULL){
    printf("Element is : %d\n",start->data);
    start=start->next;
}
}