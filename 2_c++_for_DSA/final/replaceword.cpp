#include<bits/stdc++.h>

using namespace std;

int main(){

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s,x;
        cin >> s >> x;
    

        for(int i=0;i + x.size() <= s.size();i++){
       
            if(s.substr(i, x.size()) == x){
                s.replace(i, x.size(), "#");
                
          
            }

        }
        cout << s << endl;
    }
    
    

    return 0;
}