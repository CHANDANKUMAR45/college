/* link list 
count total number of node and even\odd nodes */
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
    int count=0,even=0,odd=0;
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
    count++;
    if((start->data)%2==0)
     even++; 
    else{
        odd++;
}
    printf("do you want enter more no : ");
    scanf("%d",&ch);
    if(ch==1)
    break;
}
printf("Total number of node is : %d\n",count);
printf("even number of node is :%d \n",even);
printf("odd number of node is : %d\n",odd);

while(start!=NULL){
    printf("Data is : %d\n",start->data);
    start=start->next;
   }
}