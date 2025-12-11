/* To perform algebric expresion in tree */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char data;
    struct node *lc,*rc;
    struct node *next;
};
struct node * newnode(char);
struct node * pop();
void push(struct node *);
void inorder(struct node *);
struct node * head=NULL;
struct node * newnode(char d){
    struct node *new1;
    new1=(struct node *)malloc(sizeof(struct node));
    new1->data=d;
new1->lc=new1->rc=NULL;
new1->next=NULL;
return new1;
}
void push(struct node *n){
    if(head==NULL){
        head=n;
    }
    else{
        n->next=head;
        head=n;
    }
}
struct node * pop(){
    struct node *n=head;
    head=head->next;
    return n;
}
void inorder(struct node *root){
    if(root!=NULL){
inorder(root->lc);
printf("%c ",root->data);
inorder(root->rc);
    }
}
void main(){
    char e[10]={'x','y','z','*','+'};
    int t=strlen(e);//(sizeof(e))/(sizeof(e[0]));
    //printf("t=%d",t);
    struct node *s,*p,*q;
    for(int i=0;i<t;i++){
        if(e[i]=='+' || e[i]=='-' || e[i]=='*' || e[i]=='/'){
      s=newnode(e[i]);
      p=pop();
      q=pop();
      s->lc=q;
      s->rc=p;
      push(s);
        }
    else{
        s=newnode(e[i]);
        push(s);
    }
}
inorder(head);
}