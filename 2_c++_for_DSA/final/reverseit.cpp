#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
};

int main()
{

    int n;
    cin >> n;
    Student students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
    }
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        char tmp = students[i].section;
        students[i].section = students[j].section;
        students[j].section = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << endl;
    }

    return 0;
}

/**

     *  Sample input *
3
Rakib 7 B 90
Sakib 10 A 85
Ahsan 9 C 36

    *  Sample output *
Rakib 7 C 90
Sakib 10 A 85
Ahsan 9 B 36

 */