#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        int b[n];
        int c[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        // sort the array a in assending way and store it in b as sorted array
        for(int i=0;i<n;i++){
            b[i]=a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(b[i]>b[j]){
                    int temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }

        for(int i=0;i<n;i++){
            int diff=0;
            if(a[i]>b[i]){
                diff=a[i]-b[i];
            }
            else{
                diff=b[i]-a[i];
            }
            c[i]=diff;
        }

        for(int i=0;i<n;i++){
            printf("%d ",c[i]);
        }
        printf("\n");
        
    }
}