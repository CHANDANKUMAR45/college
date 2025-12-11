/* merge link list 
and link list create as append at last */
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main(){
    struct node *start1=NULL,*t1,*new1, *start2=NULL,*t2,*new2;
    int ch1,ch2;
printf("enter data for first link list\n");
while(1){
    new1=(struct node*)malloc(sizeof(struct node));
    printf("enter data : ");
    scanf("%d",&new1->data);
    new1->next=NULL;
    if(start1==NULL)
    {
        start1=new1; 
    }  
    else{
       t1=start1;
        while(t1->next!=NULL){
            t1=t1->next;
        }
            t1->next=new1;

    }
    printf("do you want enter more no : ");
    scanf("%d",&ch1);
    if(ch1==1)
    break;
}
printf("enter data for second link list\n");
while(1){
    new2=(struct node*)malloc(sizeof(struct node));
    printf("enter data : ");
    scanf("%d",&new2->data);
    new2->next=NULL;
    if(start2==NULL)
    {
        start2=new2; 
    }  
    else{
       t2=start2;
        while(t2->next!=NULL){
            t2=t2->next;
        }
            t2->next=new2;

    }
    printf("do you want enter more no : ");
    scanf("%d",&ch2);
    if(ch2==1)
    break;
}
printf("After mergeing link list \n");
t1->next=start2;
while(start1!=NULL){
    printf("element is : %d\n",start1->data);
    start1=start1->next;
}
}