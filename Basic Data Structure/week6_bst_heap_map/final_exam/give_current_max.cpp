#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string n, int r, int m)
    {
        this->name = n;
        this->roll = r;
        this->marks = m;
    }
};

class customcomp
{
public:
    bool operator()(Student l, Student r)
    {
        if(l.marks == r.marks)
            return l.roll > r.roll;
        return l.marks < r.marks;
        
    }
};

int main()
{

    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, customcomp> pq;

    string name;
    int roll, marks;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> roll >> marks;
        Student sobj(name, roll, marks);
        pq.push(sobj);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            cin >> name >> roll >> marks;
            Student sobj(name, roll, marks);
            pq.push(sobj);
        }
        if (x == 0)
        {
         
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
        else if (x == 1)
        {

            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        }

        else if (x == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                     cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                else
                    cout << "Empty" << endl;
            }
            else
            {

                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}