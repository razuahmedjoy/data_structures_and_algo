#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,e;
    cin >> n >> e;
    int adj_matrix[n][n];
    memset(adj_matrix,0,sizeof(adj_matrix));

    while(e--){
        int a,b;
        cin >> a >> b;
        adj_matrix[a][b] = 1;
    }
    int q;
    cin >> q;
    while(q--){
        int a,b;
        cin >> a >> b;
        if(adj_matrix[a][b]==1 || a==b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    

    return 0;
}