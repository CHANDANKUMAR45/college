/* Given an array and a number, find two integers that sum to the given number.*/
#include<stdio.h>
int main(){
    int arr[]={2,3,4,5,6,8,9};
    int num;
    printf("Enter number for finding the sum :");
    scanf("%d",&num);

    for (int i=0; i<7;i++){
        for (int j=i + 1; j<7; j++) {
            if(arr[i]+arr[j]==num){
                printf("%d  %d",arr[i],arr[j]);
            }
        }
}
}