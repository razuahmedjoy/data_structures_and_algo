#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n < 3)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(arr, arr + n);
        int flag = 0;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == s)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else if(flag == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}