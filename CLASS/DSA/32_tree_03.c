/* create binary search tree and to perform searching operation*/
#include<stdio.h>
#include<stdlib.h>
struct node{
struct node *lc,*rc;
int data;
};
void bst(struct node*,struct node*);
void bst_search(struct node*,int num);
void main(){
    struct node *root=NULL,*new1;
    int ch,num;
    while(1){
        new1=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&new1->data);
        new1->lc=new1->rc=NULL;
        if(root==NULL)
        root=new1;
        else
        bst(root,new1);
        printf("do you want to continue");
        scanf("%d",&ch);
        if(ch==1)
        break;
    }
    printf("enter number for searching");
    scanf("%d",&num);
    bst_search(root,num);
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
void bst_search(struct node *root,int num)
{
    if(root!=NULL){
        if(root->data==num)
        printf("element is found");
        else if(root->data<num)
        bst_search(root->rc,num);
        else
        bst_search(root->lc,num);
    }
    else
    printf("element is not found");
    
}
