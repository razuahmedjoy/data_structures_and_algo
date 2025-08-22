#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    getline(cin, s);

    stringstream ss(s);
    bool found = false;
    while(ss >> s) {
        if(s == "Jessica") {
            cout << "YES" << endl;
            found = true;
            break;
        }
    }
    if(!found) {
        cout << "NO" << endl;
    }

    return 0;
}