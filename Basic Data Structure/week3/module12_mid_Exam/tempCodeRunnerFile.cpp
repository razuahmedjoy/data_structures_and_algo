#include <bits/stdc++.h>

using namespace std;

int main()
{

    list<string> l;
    string s;
    list<string>::iterator it;

    while (cin >> s)
    {
        if (s == "end")
            break;
        l.push_back(s);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string command, url;
        cin >> command;
        if (command == "visit")
        {
            cin >> url;
        }

        if (command == "visit")
        {
            int found = 0;
            for (it = l.begin(); it != l.end(); it++)
            {
                if (*it == url)
                {
                    found = 1;
                    break;
                }
            }
            if (found)
            {
                cout << url << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if(it != l.end())
            {
                it++;
                if (it != l.end())
                {
                    cout << *it << endl;
                }
                else
                {   it--;
                    cout << "Not Available" << endl;
                }
            }
            else
            {
                cout << "Not Available" << endl;
            }
            
        }
        else if (command == "prev")
        {
            if (it != l.begin())
            {
                it--;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
      
        
    }
}