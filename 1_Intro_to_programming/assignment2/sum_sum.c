#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int posSum=0;
    int negSum=0;

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            posSum+=arr[i];
        }
        else{
            negSum+=arr[i];
        }
    }

    printf("%d %d", posSum, negSum);

}