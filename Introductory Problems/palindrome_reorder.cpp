#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    int n = s.size();

    unordered_map<char,int> mp;

    for(auto c : s) {
        mp[c]++;
    }
    char odd_char = '1';
    int odd = 0;
    for(auto it : mp) {
        if(it.second % 2) {
            if(n % 2 == 0) {
                cout<<"NO SOLUTION"<<endl;
                return 0;
            }
            odd++;
            if(odd > 1) {
                cout << "NO SOLUTION" <<endl;
                return 0;
            }
            odd_char = it.first;
        }
    }
    vector<char> res(n);
    int index = 0;
    for(auto &  it : mp) {
        while(it.second > 1) {
            res[index] = res[n - index - 1] = it.first;
            it.second -= 2;
            index++;
        }
    }
    if(odd_char != '1') {
        res[n/2] = odd_char;
    }
    for(auto c : res) {
        cout << c;
    }
}