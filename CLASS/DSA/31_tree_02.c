/* create binary search tree and print inorder , preorder , and postorder*/
#include<stdio.h>
#include<stdlib.h>
struct node{
struct node *lc,*rc;
int data;
};
void bst(struct node*,struct node*);
void Inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
void main(){
    struct node *root=NULL,*new1;
    int ch;
    while(1){
        new1=(struct node*)malloc(sizeof(struct node));
        printf("enter data : ");
        scanf("%d",&new1->data);
        new1->lc=new1->rc=NULL;
        if(root==NULL)
        root=new1;
        else
        bst(root,new1);
        printf("do you want to continue : ");
        scanf("%d",&ch);
        if(ch==1)
        break;
    }
    printf("Inorder are :\n");
    Inorder(root);
    printf("\npreorder are :\n");
    preorder(root);
    printf("\npostorder are :\n");
    postorder(root);
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
void Inorder(struct node *root){
    if(root!=NULL){
        Inorder(root->lc);
        printf("%d\t",root->data);
        Inorder(root->rc);
    }
}
void preorder(struct node *root){
    if(root!=NULL){
    printf("%d\t",root->data);
    preorder(root->lc);
    preorder(root->rc);
}
}
void postorder(struct node *root){
    if(root!=NULL){
        postorder(root->lc);
        postorder(root->rc);
        printf("%d\t",root->data);
    }
}