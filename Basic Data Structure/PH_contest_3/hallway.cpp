#include <bits/stdc++.h>

using namespace std;

int main()
{

    int q;
    cin >> q;
    queue<string> line;
    for(int i=0;i<q;i++)
    {
        string command;
        string name;
        cin >> command;
        if (command == "ARRIVE")
        {
            cin >> name;
            line.push(name);
        }
        else if (command == "SERVE")
        {
            if (!line.empty())
            {
                line.pop();
            }
            else
            {
                cout << "No patients" << endl;
            }
        }
        else if (command == "FIRST")
        {
            if (!line.empty())
            {
                cout << line.front()<<endl;
            }
            else
            {
                cout << "No patients" << endl;
            }
        }

        else if (command == "LAST")
        {
            if (!line.empty())
            {
                cout << line.back()<<endl;
            }
            else
            {
                cout << "No patients" << endl;
            }
        }
        else if (command == "COUNT")
        {

            cout << line.size()<<endl;
        }

        else if (command == "SHOW")
        {
            if (line.empty())
            {
               cout << "No patients" << endl;
            }
            else
            {
                queue<string> q = line;
                while (!q.empty())
                {
                    cout << q.front() << " ";
                    q.pop();
                }
                cout<<endl;
            }   
        }
    }

    return 0;
}