#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int pos,value;
    scanf("%d %d", &pos,&value);

    for(int i=0;i<n;i++){
        if(i==pos){
            arr[i]=value;
        }
    }

    for(int i=n-1;i>=0;i--){
        printf("%d ", arr[i]);
    }
}