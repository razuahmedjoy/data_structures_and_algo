#include <bits/stdc++.h>

using namespace std;

char grid[105][105];
bool vis[105][105];
vector<pair<int, int>> moves = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

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

    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        cout << par_i << " " << par_j << endl;

        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + moves[i].first;
            int cj = par_j + moves[i].second;
            if (isValid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    bfs(si, sj);

    return 0;
}