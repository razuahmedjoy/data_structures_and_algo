#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v(10); // type 1

    // print size
    cout << v.size() << endl; // should print 10

    // capacity
    cout << v.capacity() << endl; // should print 10

    v.push_back(5);
    cout << v.capacity() << endl;

    v.push_back(10); // adding multiple elements at once
    cout << v.capacity() << endl; // should print 20, as the vector doubles its capacity when it runs out of space


    return 0;
}