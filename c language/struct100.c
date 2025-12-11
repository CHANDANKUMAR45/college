#include<stdio.h>
#include<string.h>
struct book{
    char name[50];
    float price;
    int page;

}a[2];
int main(){
    int i;
    printf("enter all info");
    for(i=0;i<2;i++){
        scanf("%s%f%d",&a[i].name,&a[i].price,&a[i].page);
    }
    for(i=0;i<2;i++){
        printf("NAME   : %s\nPRINCE : %f\nPAGE   : %d\n",a[i].name,a[i].price,a[i].page);
    }
    return 0;
}