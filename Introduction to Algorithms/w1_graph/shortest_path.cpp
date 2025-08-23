#include<bits/stdc++.h>

using namespace std;
vector<int> adj_list[1005];
bool visited[1005];
int level[1005];
int parent[1005];


void bfs(int source_node){

    queue<int> q;
    q.push(source_node);
    visited[source_node] = true;
    level[source_node] = 0;

    while(!q.empty()){
        int par = q.front();
        q.pop();

        // cout << par << " ";

    
        // short iteration
        for(int child : adj_list[par]){

            if(!visited[child]){
                q.push(child);
                visited[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }

        }
    }

}

void print_shortest_path(int src, int dest){

    if(dest == src){
        cout << src;
        return;
    }
    print_shortest_path(src,parent[dest]);
    cout << " -> " << dest;
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
    memset(level,-1, sizeof(level));
    memset(parent,-1, sizeof(parent));

    int src,det;
    cin >> src >> det;
    

    bfs(src);

    // for(int i=0;i<n;i++){
    //     cout << i << " Parent " << parent[i] <<endl;
    // }
    // cout << det;
    // for(int i = det;i!=src;i=parent[i]){
    //     cout << " -> " << parent[i];
        
    // }
    print_shortest_path(src,det);
    

    return 0;
}


/**
 * 
 * Sample input
 * numberOfNode numbeOfEdges
7 9
0 1
1 3
1 4 
3 2
3 5 
5 6
2 5
4 6
1 6
0
6

 */