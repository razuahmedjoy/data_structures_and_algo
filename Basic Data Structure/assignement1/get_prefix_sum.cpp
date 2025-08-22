#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    long long arr[n];
    long long prefix_sum[n];
    long long sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
        prefix_sum[i] = sum;
    }

    for(int i=n-1;i>=0;i--){
        cout << prefix_sum[i] << " ";
    }
    

    return 0;
}