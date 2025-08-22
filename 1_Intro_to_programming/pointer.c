#include<stdio.h>

int main(){

    int x = 10;
    int *ptr;
    ptr = &x;
    
    printf("value of x = %d\n", x);
    printf("address of x = %p\n", &x);

    printf("value of ptr = %p\n", ptr);
    
    return 0;
}