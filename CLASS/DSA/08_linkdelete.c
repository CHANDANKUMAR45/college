
 /* link list delete
Append at last(alast) */


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void main(){
    struct node *start=NULL,*t,*new1,*del;
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
/*while(start!=NULL){
    printf("Elements : %d\n",start->data);
    start=start->next;
}*/
int loc,x;
new1=(struct node*)malloc(sizeof(struct node));
//printf("enter data : ");
//scanf("%d",&new1->data);
printf("enter loc");
scanf("%d",&loc);
if(loc==1){
    del=start;
    start=start->next;
    free(del);
}
else{
    t=start;
    for(x=1;x<=loc-2;x++)
        t=t->next;
    
   del=t->next;
   t->next=del->next;
   free(del);
}
printf("after deleting the element are : \n");
while(start!=NULL){
    printf("Elements : %d\n",start->data);
    start=start->next;
}

}