#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        if (i <= n / 2)
        {
            for (int space = 1; space < i; space++)
            {
                cout << " ";
            }
            cout << "\\";
            for (int j = 1; j < n - (2*i-2) - 1 ; j++)
            {
                cout << " ";
            }
            cout << "/";
            cout << endl;
        }
        if(i == n / 2 + 1)
        {
            for(int j =1; j <= n/2; j++)
            {

                cout << " ";
            }
            cout << "X";
           
            cout << endl;
        }
        if (i > n / 2 + 1 )
        {
            for (int space = 1; space < n - i + 1; space++)
            {
                cout << " ";
            }
            cout << "/";
            for (int j = 1; j < (2 * i - 2) - n + 1; j++)
            {
                cout << " ";
            }
            cout << "\\";
            cout << endl;
        }
    }

    return 0;
}