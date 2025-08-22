#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];

    int dividedByTwo=0;
    int dividedByThree=0;

    for(int i=0;i<n;i++){
        scanf("%lld", &arr[i]);
        if(arr[i]%2==0 && arr[i]%3 ==0){
            dividedByTwo++;
        }
        else if(arr[i]%2==0){
            dividedByTwo++;
        }
        else if(arr[i]%3==0){
            dividedByThree++;
        }

    }

    printf("%d %d\n", dividedByTwo, dividedByThree);
    return 0;
}