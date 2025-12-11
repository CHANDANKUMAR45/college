#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
    printf("enter 1st matrix element\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}

    
printf("enter 2st matrix element\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}
printf("THE PRODUCT OF MATRIX IS\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){

        for(k=0;k<3;k++){
sum=sum+a[i][k]*b[k][j];
        

        }
        c[i][j]=sum;
        sum=0;

}
    
}


for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",c[i][j]);
        }
        printf("\n");

}
return 0;
}
