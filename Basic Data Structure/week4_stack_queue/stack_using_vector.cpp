#include<bits/stdc++.h>

using namespace std;

// stack class
class Stack{

    public:
        vector<int> v;

        void push(int val){
            v.push_back(val);
        }

        void pop(){
            v.pop_back();
        }
        int top(){
            return v.back();
        }

        int size(){
            return v.size();
        }

        bool empty(){
            return v.empty();
        }
    
};



int main(){

    Stack newStack;
    newStack.push(5);
    newStack.push(6);

    cout << newStack.top();
    newStack.pop();
    cout << newStack.top();




    return 0;
}