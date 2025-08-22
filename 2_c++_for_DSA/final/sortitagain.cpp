#include<bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int english_marks;
};

bool cmp(Student l, Student r){
    if(l.english_marks == r.english_marks){
        if(l.math_marks == r.math_marks){
            return l.id < r.id;
        }
        return l.math_marks > r.math_marks;
    }
    return l.english_marks > r.english_marks;
}

int main(){

    int n;
    cin >> n;
    Student students[n];

    for(int i=0;i<n;i++){
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id 
            >> students[i].math_marks >> students[i].english_marks;
        
    }

    sort(students,students+n, cmp);

    for(int i=0;i<n;i++){
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " "
             << students[i].id << " " << students[i].math_marks << " " << students[i].english_marks << endl;
    }
    

    return 0;
}