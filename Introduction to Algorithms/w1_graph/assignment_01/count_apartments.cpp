#include <bits/stdc++.h>

using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> moves = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;
vector<int> noOfRooms;

bool isValid(int i, int j)
{

    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
int dfs(int si, int sj)
{

    vis[si][sj] = true;
    int roomSize = 1;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + moves[i].first;
        int cj = sj + moves[i].second;
        if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
            roomSize += dfs(ci, cj);
    }
    return roomSize;
}

int main()
{

    cin >> n >> m;
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

 
    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid[i][j] == '.')
            {
                int no = dfs(i, j);
                noOfRooms.push_back(no);
            }
        }
    }

    sort(noOfRooms.begin(), noOfRooms.end());
    if (noOfRooms.empty())
    {
        cout << 0 << "\n";
    }
    else
    {
        for (auto x : noOfRooms)
            cout << x << " ";
    }

    return 0;
}