#include <bits/stdc++.h>
using namespace std;

int main()
{

    char str[1000006];
    while (cin.getline(str, 1000006))
    {

        int len = strlen(str);

        sort(str, str + len);
        for(int i = 0; i < len; i++){
            if(str[i] == ' '){
                continue;
            }
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}
