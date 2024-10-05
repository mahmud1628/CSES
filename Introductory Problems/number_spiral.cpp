#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long int y,x;
        cin>>y>>x;
        if(y == x) {
            cout << y*y - y + 1 << endl;
            continue;
        }
        long long int m = y > x ? y : x;
        long long int number_m = m*m - m + 1;
        if(m == y) {
            if(m%2) {
                cout << number_m - m + x << endl;
            }
            else {
                cout << number_m + m - x << endl;
            }
        }
        else {
            if(m%2) {
                cout << number_m +  m - y << endl;
            }
            else {
                cout << number_m - m + y << endl;
            }
        }
    }
}