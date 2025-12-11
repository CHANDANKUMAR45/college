/*
   This program separates odd and even nodes from a singly linked list.
   The linked list is created by appending nodes at the end.
*/

#include<stdio.h>
#include<stdlib.h>

// Node structure for the linked list
struct node
{
    int data;
    struct node *next;
};

void main(){
    struct node *start=NULL,*t,*new1,*even=NULL,*odd=NULL;
    int ch,count=1;

    // Input loop for creating the linked list
    while(1){
        new1=(struct node*)malloc(sizeof(struct node));
        printf("enter data : ");
        scanf("%d",&new1->data);
        new1->next=NULL;
        
        // Appending node at the end of the linked list
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
        
        // Asking user if more nodes are to be added
        printf("do you want to enter more numbers? (1 for yes, 0 for no): ");
        scanf("%d",&ch);
        if(ch==0)
            break;
    }

    // Loop to separate odd and even nodes into separate linked lists
    while(start!=NULL){
        new1=(struct node*)malloc(sizeof(struct node));
        new1->data=start->data;
        new1->next=NULL;
        
        // Adding even nodes to the 'even' linked list
        if(count%2==0){
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
        // Adding odd nodes to the 'odd' linked list
        else{ 
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

    // Displaying the even node data
    printf("The even node data is\n");
    while(even!=NULL){
        printf("Element=%d\n",even->data);
        even=even->next;
    }

    // Displaying the odd node data
    printf("The odd node data is\n");
    while(odd!=NULL){
        printf("Element=%d\n",odd->data);
        odd=odd->next;
    }
}
