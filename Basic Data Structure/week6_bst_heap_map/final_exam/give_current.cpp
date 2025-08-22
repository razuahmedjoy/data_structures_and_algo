#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    priority_queue<long long int, vector<long long int>, greater<long long int>> pq;
    long long num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        pq.push(num);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        long long val;
        cin >> x;
        if (x == 0)
        {
            cin >> val;
        }
        if (x == 0)
        {
            pq.push(val);
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else if (x == 1)
        {

            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }

        else if (x == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                    cout << pq.top() << endl;
                else
                    cout << "Empty" << endl;
            }
            else
            {

                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}