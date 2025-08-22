#include <bits/stdc++.h>

using namespace std;

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        set<int> s;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            long long int num;
            cin >> num;
            s.insert(num);
        }
        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}