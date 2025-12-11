/*creation of  circular queue */
#include<stdio.h>
int Queue[5],maxsize=5,front=-1,rear=-1;
void delete();
void insert();
void main(){
    int ch;
    while(1){
        printf("enter 1 for inserting\n and 2 for deleting : ");
        scanf("%d",&ch);
        if(ch==1)
        insert();
        if(ch==2)
        delete();
        printf("Do you want to continue");
        scanf("%d",&ch);
        if(ch==1)
        break;
    
    }
}
void insert(){
    if((rear+1)%maxsize==front){
printf("Queue is full");
    }
   else if(rear==-1){
        front=rear=0;
        printf("enter data : ");
        scanf("%d",&Queue[rear]);

    }
    else{
        rear=(rear+1)%maxsize;
        printf("enter data  : ");
        scanf("%d",&Queue[rear]);
        
    }
}
void delete(){
    if((front>rear)||(front==-1)){
       printf("Queue is empty \n");
    }
    else{
        printf("delete element is %d\n",Queue[front]);
        front=(front+1)%maxsize;
    }
}