#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,x,y;
    cin >> n >> x >> y;
    string nums;
    cin >> nums;


    int x_digit = nums[x - 1] - '0';
    int y_digit = nums[y - 1] - '0';

    // Check if both digits are zero
    if (x_digit == 0 && y_digit == 0) {
        cout << "YES" << endl;
        return 0;
    }
    if ((x_digit % y_digit != 0 && y_digit % x_digit != 0)) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    
  
    
    

    return 0;
}