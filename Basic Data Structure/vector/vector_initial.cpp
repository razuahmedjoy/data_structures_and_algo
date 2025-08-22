#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v; // type 1
    vector<int> v1(10); // type 2, size 10, all elements initialized to 0
    vector<int> v2(10, 5); // type 3, size 10, all elements initialized to 5

    vector<int> v3(v2); // type 4, copy constructor, v3 is a copy of v2
    
    
    cout << v.size() << endl;
    cout << v1.size() << endl;
    cout << v2.size() << endl;

    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }

    cout << endl;
    for(int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << endl;


    // copy arrray to a vector
    int ar[5] = {1,2,3,4,5};
    vector<int> v4(ar, ar + 5); // type 5, copy array to vector
    for(int i = 0; i < v4.size(); i++){
        cout << v4[i] << " ";
    }




    return 0;
}