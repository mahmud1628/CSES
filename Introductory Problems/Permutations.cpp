#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n == 1) {
        cout << n << endl;
        return 0;
    }
    if(n < 4) {
        cout << "NO SOLUTION" <<endl;
        return 0;
    }
    vector<int> res;
    for(int i=2;i<=n;i+=2) {
        res.push_back(i);
    }
    for(int i=1;i<=n;i+=2) {
        res.push_back(i);
    }
    for(auto a : res) {
        cout << a << " ";
    }
    cout << endl;
}