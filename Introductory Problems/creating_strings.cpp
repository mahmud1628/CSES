#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string> res;
    res.push_back(s);
    while(next_permutation(s.begin(),s.end())) {
        res.push_back(s);
    }
    cout << res.size() <<endl;
    for(auto c : res) {
        cout << c <<endl;
    }
}