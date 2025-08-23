#include<bits/stdc++.h>

using namespace std;
vector<int> adj_list[1005];
bool visited[1005];


void dfs(int source_node){

   //base case

   cout << source_node << " ";
   visited[source_node] = true;
   for(int child:adj_list[source_node]){
        if(!visited[child]){
            dfs(child);
        }
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
    dfs(0);
    

    return 0;
}