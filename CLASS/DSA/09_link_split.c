/* split link list 
and link list create as append at last */
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main(){
    struct node *start=NULL,*t,*new1,*sp;
    int ch;

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
t=start;
int loc,i;
printf("enter loc where you want to split : ");
scanf("%d",&loc);
for(i=1;i<loc;i++){
t=t->next;
}
sp=t->next;
t->next=NULL;
while(start!=NULL){
    printf("element is : %d\n",start->data);
    start=start->next;
}
printf("after spliting\n");
while(sp!=NULL){
    printf("Element is : %d\n",sp->data);
    sp=sp->next;
}
}