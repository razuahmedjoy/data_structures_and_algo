#include<bits/stdc++.h>

using namespace std;

int main(){

    map<string,int> mp;

    int fre[100];
    fre[5] = 20;


    mp["tamim"] = 2; // log(n)
    mp["zahid"] = 50;
    mp["partho"] = 30;


    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second <<endl; // log(n);
    }


    // jodi key nao thake, tahole 0 dekhay
    // cout << mp["nothing"] <<endl; //it prints 0

    // check if any key is available in map
    
    if(mp.count("nothing")){
        cout << "Ache\n";
    }
    else{
        cout << "nai\n";
    }

    return 0;
}