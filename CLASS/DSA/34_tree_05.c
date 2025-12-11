#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *lc,*rc;
    int lbit,rbit;
};
void tbt(struct node*,struct node*);
struct node *head;
void inorder(struct node*);
void main(){
   struct node *root=NULL,*new1;
   int ch;
   while(1){
    new1=(struct node *)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&new1->data);
    new1->lbit=new1->rbit=0;
    if(root==NULL){
        head=(struct node *)malloc(sizeof(struct node));
        head->data=999;
        head->lc=head->rc=head;
        head->lbit=head->rbit=1;
        new1->lc=new1->rc=head;
        root=new1;
    }
    else{
    tbt(root,new1);
    }

        printf("do you want to continue : ");
        scanf("%d",&ch);
        if(ch==1)
        break;
   }
   inorder(root);
}
void tbt(struct node *root,struct node *new1){
    if(root->data>new1->data)
    {
    if(root->lc!=head)
    tbt(root->lc,new1);
    else{
        new1->lc=root->lc;
        new1->rc=root;
        root->lc=new1;
        root->lbit=1;
    }
    }
    else{
        if(root->rc!=head)
        tbt(root->rc,new1);
        else{
            new1->rc=root->rc;
            new1->lc=root;
            root->rc=new1;
            root->rbit=1;
        }
    }
}
void inorder(struct node *root){
    if(root!=head){
        inorder(root->lc);
        printf("%d\t",root->data);
        inorder(root->rc);
    }
}