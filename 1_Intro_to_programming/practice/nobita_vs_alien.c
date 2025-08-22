#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int n,k;

    scanf("%d %d", &n, &k);

    int sizes[n];
    for(int i=0; i<n; i++){

        scanf("%d", &sizes[i]);
    }

    // sort the array
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(sizes[i] > sizes[j]){
                int temp = sizes[i];
                sizes[i] = sizes[j];
                sizes[j] = temp;
            }
        }
    }
    int count = 0;
    for(int i=0,j = n-1; i<j;){
        if(sizes[j] > k){
            j--;
            continue;
        }
        if(sizes[i]+sizes[j] <= k){
            count++;
            i++;
            j--;
        }
    }
    printf("%d\n", count);


    return 0;
}


