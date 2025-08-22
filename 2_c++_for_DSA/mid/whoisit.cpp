#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    double total_marks;
};

int main()
{

    int T;
    cin >> T;

    int students_no = 3;

    for (int i = 0; i < T; i++)
    {
        Student students[students_no];
        int marks[students_no];
        for (int j = 0; j < students_no; j++)
        {
            cin >> students[j].id >> students[j].name >> students[j].section >> students[j].total_marks;
            marks[j] = students[j].total_marks;
        }
        int max_marks = marks[0];
        for (int j = 0; j < students_no; j++)
        {
            if (marks[j] > max_marks)
            {
                max_marks = marks[j];
            }
        }

        for (int j = 0; j < students_no; j++)
        {
            if (marks[j] == max_marks)
            {
                cout << students[j].id << " " << students[j].name << " " << students[j].section << " " << students[j].total_marks << endl;
                break;
            }
        }
    }
    return 0;
}