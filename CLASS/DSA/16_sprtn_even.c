/*sepration of odd node and even node data in singly link list
and link list created at append at last
*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void main(){
    struct node *start=NULL,*t,*new1,*even=NULL,*odd=NULL;
    int ch,count=1;
while(1){
    new1=(struct node*)malloc(sizeof(struct node));
    printf("enter data : ");
    scanf("%d",&new1->data);
    new1->next=NULL;
    if(start==NULL)
    {
        start=new1;  
    } 
    else{
       t=start;
        while(t->next!=NULL){
            t=t->next;
        }
            t->next=new1;
    }
    printf("do you want enter more no : ");
    scanf("%d",&ch);
    if(ch==1)
    break;
}
while(start!=NULL){
    if(count%2==0){
       new1=(struct node*)malloc(sizeof(struct node));
       new1->data=start->data;
       new1->next=NULL;
        if(even==NULL){
            even=new1;
        }
        else{
            t=even;
        while(t->next!=NULL){
            t=t->next;
        }
            t->next=new1;
        }
        start=start->next;
    }
    else{ 
        new1=(struct node*)malloc(sizeof(struct node));
       new1->data=start->data;
       new1->next=NULL;
        if(odd==NULL){
            odd=new1;
        }
        else{
            t=odd;
        while(t->next!=NULL){
            t=t->next;
        }
            t->next=new1;
        }
        start=start->next;
    }
    
        count++;
    
}
  printf("The even node data is\n");
 while(even!=NULL){
     printf("Element=%d\n",even->data);
     even=even->next;
 }
 printf("The odd node data is\n");
 while(odd!=NULL){
     printf("Element=%d\n",odd->data);
     odd=odd->next;
 }
}