#include<bits/stdc++.h>
using namespace std;


class Student{
    public:
        string name;
        int roll;
        int marks;


        Student(string name, int roll, int marks){
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};

class customcmp{
    public:
    bool operator()(Student l, Student r){
        return l.marks < r.marks;
        
    }
};

int main(){

    // priority_queue<int> pq;

    // make it minimum priority queue
    // priority_queue<int,vector<int>,greater<int>> pq;
    
    // pq.push(10);
    // pq.push(5);
    // pq.push(30);

    // cout << pq.top() << endl;
    // pq.push(100);
    // cout << pq.top() << endl;
    // pq.pop();
    // pq.pop();
    // cout << pq.top() << endl;



    // priority queue with custom compare class

    priority_queue<Student,vector<Student>,customcmp> pq;

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    } 


    while(!pq.empty()){
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks <<endl;
        pq.pop();
    }

    return 0;
}