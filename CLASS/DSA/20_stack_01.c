/* create stack */
#include<stdio.h>
int stack[5],maxsize=5,top=-1;
void push();
void pop();
void main(){
    int ch,k;
    printf("menu");
    while(1){
       printf("enter 1 for push and 2 for pop");
       scanf("%d",&ch);
       if(ch==1)
       push();
       if(ch==2)
       pop();
       printf("Do you want to continue");
          scanf("%d",&k);
          if(k==1)
          break;
    }
}
    void push()
    {
        if(top>=maxsize){
        printf("Stack is full");
        }
        else{
            top=top+1;
            printf("enter data : ");
            scanf("%d",&stack[top]);
        }
    }
    void pop(){
        if(top==-1){
            printf("stack is empty");
        }
        else{
            printf("delete element is %d\n",stack[top]);
            top=top-1;
            }
    }
