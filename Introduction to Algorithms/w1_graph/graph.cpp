#include<bits/stdc++.h>

using namespace std;


void graph_adjacency_matrix(){
    int n,e;
    cin >> n >> e;

    int adjMatrix[n][n];

    // set all value 0 of 2d Array

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         adjMatrix[i][j] = 0;
    //     }
    // }

    // shortcut
    memset(adjMatrix,0,sizeof(adjMatrix)); // set value to memory in shortcut
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                adjMatrix[i][j]=1;
            }
        }
    }


    for(int i=0;i<e;i++){
        int a, b;
        cin >> a>> b;
        adjMatrix[a][b] = 1;
        // don't add the below line if directed graph
        adjMatrix[b][a] = 1;
    }


    // show the adjacency matrix

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

void adjacency_list_graph(){

    int n,e;
    cin >> n >>e;
    
    // create an array of vector type;
    vector<int> adj_list[n];

    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }


    for(int i=0;i<n;i++){
        cout << i << " -> ";
        for(int j=0;j<adj_list[i].size();j++){
            cout << adj_list[i][j] << " ";
        }
        cout << endl;
    }

}

void edge_list(){

    int n,e;
    cin >> n >> e;
    vector<pair<int,int>> edges;
    while(e--){
        int a,b;
        cin >> a >> b;
        edges.push_back({a,b});
    }

    for(auto x: edges){
        cout << x.first << " " << x.second<< endl;
    }

}

int main(){

    // graph_adjacency_matrix();
    // adjacency_list_graph();

    // edge_list();
    

    return 0;
}