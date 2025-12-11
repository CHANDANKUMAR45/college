/* create binary search tree and to perform deleting operation*/
#include<stdio.h>
#include<stdlib.h>
struct node{
struct node *lc,*rc;
int data;
};
void bst(struct node*,struct node*);
void bst_delete(struct node*,int num);
void inorder(struct node *);
void main(){
    struct node *root=NULL,*new1;
    int ch,num;
    while(1){
        new1=(struct node*)malloc(sizeof(struct node));
        printf("enter data :");
        scanf("%d",&new1->data);
        new1->lc=new1->rc=NULL;
        if(root==NULL)
        root=new1;
        else
        bst(root,new1);
        printf("do you want to continue :");
        scanf("%d",&ch);
        if(ch==1)
        break;
    }
    printf("Inorder are :\n");
    inorder(root);
    printf(" \n enter number for deleting :");
    scanf("%d",&num);
    bst_delete(root,num);
    printf("After deleting  Inorder are :\n");
    inorder(root);
}
void bst(struct node *root,struct node *new1){
    if(new1->data<root->data){
        if(root->lc!=NULL)
        bst(root->lc,new1);
        else
        root->lc=new1;
    }
    else{
            if(root->rc!=NULL)
            bst(root->rc,new1);
            else
            root->rc=new1;
        }
    }
    //function for deleting
void bst_delete(struct node *root,int num){
struct node *p,*c;
c=root;
while(c!=NULL){
    if(c->data==num)
    break;
    else{
        p=c;
        if(c->data>num)
        c=c->lc;
        else
        c=c->rc;
    }
}
//case1: node has no child
if(c->lc==NULL && c->rc==NULL){
    if(p->lc==c)
     p->lc=NULL;
    else{
    p->rc=NULL;
    }
}
//case2: node has one child
if(c->lc==NULL && c->rc!=NULL){
    if(p->lc==c)
    p->lc=c->rc;
    else
    p->rc=c->rc;
}
if(c->rc==NULL && c->lc!=NULL){
    if(p->lc==c)
    p->lc=c->lc;
    else
    p->rc=c->lc;
}
//case3: node have two child
struct node *x;
if(c->lc!=NULL && c->rc!=NULL){
    x=c->rc;
    if(x->lc==NULL && x->rc==NULL){
        c->data=x->data;
        c->rc=NULL;
        free(x);
    }
    else if(c->rc->lc!=NULL){
struct node *p1,*y;
p1=c->rc;
y=c->rc->lc;
while(y->lc!=NULL){
    p1=y;
    y=y->lc;
}
 c->data=y->data;
 p1->lc=NULL;
 free(y)  ; 
}
}
}
void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->lc);
        printf("%d\t",root->data);
        inorder(root->rc);
    }
}