#include <bits/stdc++.h>

using namespace std;

int main()
{

    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        map<string, int> mp;
        int max = 0;
        int count = 0;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        string name;
        while (ss >> word)
        {
            mp[word]++;
            count = mp[word];
            if(max<count){
                max = count;
                name = word;
            }
        }



        cout << name << " " << max <<endl;
    }

    return 0;
}