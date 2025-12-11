#include<stdio.h>
int main(){
    int n;
    printf("enter number of arry ");
    scanf("%d",&n);
    int arr[n];
    printf("enter arry");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("AFTER SORTING\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
}
return 0;
}