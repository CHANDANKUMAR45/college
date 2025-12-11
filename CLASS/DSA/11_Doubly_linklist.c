/*create doubly linklist by append begging
*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *next,*prev;
    int data;
};
void main(){
    struct node *new1,*start=NULL;
    int ch;
    while(1){
    new1=(struct node*)malloc(sizeof(struct node));
    printf("enter data : ");
    scanf("%d",&new1->data);
    if(start==NULL){
        new1->next=NULL;
        start=new1;
    }
    else{
        new1->next=start;
        start->prev=new1;
        start=new1;
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

