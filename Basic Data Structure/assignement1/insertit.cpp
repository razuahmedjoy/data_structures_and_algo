#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> vecA(n);

    for(int i = 0; i < n; i++) {
        cin >> vecA[i];
    }
    int m;
    cin >> m;
    vector<int> vecB(m);
    for(int i = 0; i < m; i++) {
        cin >> vecB[i];
    }

    int x;
    cin >> x;
    for(int i=0,y=x; i<m;i++,y++){
        vecA.insert(vecA.begin() + y, vecB[i]);
    }
    for(int i=0; i<vecA.size(); i++) {
        cout << vecA[i] << " ";
    }


    return 0;
}