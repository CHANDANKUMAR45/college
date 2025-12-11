/* Multiply of two matrices */

#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j,k,sum=0;
    printf("Enter the element of 1st matrix :\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element of 2nd matrix :\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("On multiplying the matrix :\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                sum = sum + a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            printf("%d\t",c[i][j]);
            sum = 0;
        }
        printf("\n");
    }
    return 0;
}