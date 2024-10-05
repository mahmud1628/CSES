#include<bits/stdc++.h>
using namespace std;

void gray_code(int n) {
    vector<string> res;
    res.push_back("0");
    res.push_back("1");
    for(int i = 2;i<(1<<n);i = i << 1) {
        for(int j = i - 1;j>=0;j--) {
            res.push_back(res[j]);
        }
        for(int j =0;j<i;j++) {
            res[j] = "0" + res[j];
        }
        for(int j = i;j<2*i;j++) {
            res[j] = "1" + res[j];
        }
    }
    for(auto s : res) {
        cout << s << endl;
    }
}

int main() {
    int n;
    cin >> n;
    gray_code(n);
}