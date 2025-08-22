#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int col = 10+n;

    int row = 6 + (n-1)/2;

    
    for(int i=0;i<row;i++){
   
        for(int j=0;j<(col/2)-i;j++){
            printf(" ");
        }
        for(int j=0;j<(2*i)+1;j++){
            printf("*");
        }
        printf("\n");
    
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf(" ");
        }
        for(int j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
  
    return 0;
}