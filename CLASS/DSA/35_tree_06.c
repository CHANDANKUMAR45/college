/*extend binary tree*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *lc,*rc;
};
struct node * newnode(int);
void inorder(struct node *);
void main(){
    struct node *root;
    root=newnode(1);
    root->lc=newnode(2);
    root->rc=newnode(3);
    root->rc->lc=newnode(5);
    printf("Inorder are :\n");
    inorder(root);
}
struct node * newnode(int d){
    struct node * new1;
    new1=(struct node *)malloc(sizeof(struct node));
   new1->data=d;
   new1->lc=new1->rc=NULL;
   return(new1);
}
void inorder(struct node *root){
    if(root!=NULL){
inorder(root->lc);
printf("%d\t",root->data);
inorder(root->rc);
    }
    else{
        root=newnode(-1);
        printf("%d\t",root->data);
    }
}

