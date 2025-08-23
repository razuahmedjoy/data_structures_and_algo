#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,e;
    cin >> n >> e;
    vector<vector<int>> adj_list(n);

    while(e--){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);

    }
    int q;
    cin >> q;
    while(q--){
        int a;
        cin >> a;

        if(!adj_list[a].empty()){

            sort(adj_list[a].begin(),adj_list[a].end(),greater<int>());
            for(auto x:adj_list[a]){
                cout << x << " ";
            }
            cout<<endl;
        }
        else{
            cout << -1 <<endl;
        }
    }
    

    return 0;
}