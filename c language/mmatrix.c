
#include<stdio.h>
int main(){
    int a[4][4],b[4][4],c[4][4],i,j,k,sum;
printf("\nEnter the elements of the first matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input the elements of the second matrix
    printf("\nEnter the elements of the second matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Multiply the matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum = 0;
            for (k = 0; k < 3; k++) {
                sum += a[i][k] * b[k][j];
            
            c[i][j] = sum;
            }
        }
    }

    // Display the product matrix
    printf("\nProduct of the matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
#include <stdio.h>

int main() {
    int m1, n1, m2, n2, i, j, k;
    float a[10][10], b[10][10], product[10][10], sum;

    /* Input the dimensions of the matrices
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &m1, &n1);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &m2, &n2);

    // Check if the matrices can be multiplied
    if (n1 != m2) {
        printf("The matrices can't be multiplied!");
        return 0;
    }

    // Input the elements of the first matrix
    printf("\nEnter the elements of the first matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    // Input the elements of the second matrix
    printf("\nEnter the elements of the second matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%f", &b[i][j]);
        }
    }

    // Multiply the matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum = 0;
            for (k = 0; k < 3; k++) {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
        }
    }

    // Display the product matrix
    printf("\nProduct of the matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%0.2f\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/