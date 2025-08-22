#include<bits/stdc++.h>

using namespace std;
vector<int> adj_list[1005];
bool visited[1005];


void bfs(int source_node){

    queue<int> q;
    q.push(source_node);
    visited[source_node] = true;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        cout << parent << " ";

        for(int i=0;i<adj_list[parent].size();i++){
            if(!visited[adj_list[parent][i]]){
                q.push(adj_list[parent][i]);
                visited[adj_list[parent][i]] = true;
            }

        }
        // short iteration
        // for(int child : adj_list[parent]){

        //     if(!visited[child]){
        //         q.push(child);
        //         visited[child] = true;
        //     }

        // }
    }

}

int main(){

    int n,e;
    cin >> n >> e;

    while(e--){
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited,false, sizeof(visited));
    bfs(0);
    

    return 0;
}