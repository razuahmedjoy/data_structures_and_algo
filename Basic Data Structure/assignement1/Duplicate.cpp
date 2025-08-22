#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    long long arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+n);
    bool exists = false;

    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i+1]) {
            exists = true;
            break;
        }
        
    }
    if(exists) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}