#include <bits/stdc++.h>

using namespace std;

void print_reverse(list<int>::iterator it, list<int>::iterator begin)
{
    while (it != begin)
    {
        cout << *it << " ";
        --it;
    }
    cout << *it; // Print the last element
}

int main()
{

    list<int> l;
    int q;
    cin >> q;
    while (q--)
    {   
        long long int v;
        int x;
        cin >> x >> v;
        
        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else
        {
            if(v >= l.size()){
                // don notthing
            }
            else{
          
                l.erase(next(l.begin(), v));
            }
        }

        cout << "L -> ";
        for (auto it = l.begin(); it != l.end(); it++)
        {
            cout << *it << " ";
        }

        cout << endl;
        cout << "R -> ";
 
        for (int i=0;i<l.size();i++)
        {
            cout << *next(l.begin(), l.size() - 1 - i) << " ";
        }
        cout << endl;
    }

    return 0;
}