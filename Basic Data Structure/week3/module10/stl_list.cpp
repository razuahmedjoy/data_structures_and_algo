#include <bits/stdc++.h>

using namespace std;

int main()
{

    list<int> l;
    cout << l.size() << endl;

    
    list<int> l2(10);
    cout << l2.size() << endl;
    
    list<int> l3(10,5);
    cout << l3.size() << endl;

    // print list
    // cout << *(l3.begin());

    // print the whole list
    for(auto it = l3.begin();it != l3.end();it++){
        cout << *it << " ";
    }
    return 0;
}