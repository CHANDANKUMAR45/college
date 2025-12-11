/* link list 
Append at begging(abeg) */

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main(){
    struct node *start=NULL,*new1;
    int ch;

while(1){
    new1=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&new1->data);
    if(start==NULL)
    {
        new1->next=NULL;
        start=new1;
    }
    else{
        new1->next=start;
        start=new1;

    }
    printf("do you want enter more no : ");
    scanf("%d",&ch);
    if(ch==1)
    break;
}
while(start!=NULL){
    printf("Data is %d \n",start->data);
    start=start->next;
}

}