#include<stdio.h>


int main(){

    int T;
    scanf("%d", &T);
    while(T--){
        long long m,a,b,c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        long long d = m / (a*b*c);
        long long rem = m % (a*b*c);
        if(rem == 0){
            printf("%lld\n", d);
        }
        else{
            printf("-1\n");
        }
  
    }


    return 0;
}