#include <bits/stdc++.h>

using namespace std;

class People
{
public:
    string name;
    long long int num;
    People(string n, long long int v)
    {
        this->name = n;
        this->num = v;
    }
};

bool customcmp(People l, People r)
{

    if (l.name < r.name)
    {
        return true;
    }
    else if (l.name > r.name)
    {
        return false;
    }
    else
    {
        return l.num > r.num;
    }
}

int main()
{

    int tc;
    cin >> tc;
    vector<People> v;

    while (tc--)
    {

        string name;
        long long int val;
        cin >> name >> val;
        People obj(name, val);
        v.push_back(obj);
    }
    sort(v.begin(), v.end(), customcmp);

    for(auto it = v.begin(); it != v.end(); it++){
        cout << it->name << " " << it->num <<endl;
    }

    return 0;
}