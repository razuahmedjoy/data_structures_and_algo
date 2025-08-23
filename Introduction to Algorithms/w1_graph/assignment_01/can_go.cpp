#include <bits/stdc++.h>

using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
vector<pair<int, int>> moves = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;
int source_i,source_j,dest_i,dest_j;

bool isValid(int i, int j)
{

    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void bfs(int si, int sj)
{

    queue<pair<int, int>> q;
    q.push({si, sj});
    level[si][sj] = 0;

    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;


        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + moves[i].first;
            int cj = par_j + moves[i].second;
            if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j]+1;
            }
        }
    }
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){

            cin >> grid[i][j];
            if(grid[i][j]=='A'){
                source_i = i;
                source_j = j;
            }
            if(grid[i][j]=='B'){
                dest_i = i;
                dest_j = j;
            }
            
        }


    memset(vis, false, sizeof(vis));
    memset(level,-1, sizeof(level));

    bfs(source_i, source_j);

    if(level[dest_i][dest_j] != -1){
        cout << "YES"<<endl;
    }
    else{
        cout << "NO"<<endl;
    }

    return 0;
}