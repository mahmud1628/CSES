#include<iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    char prev = '1';
    int max_cnt = 0, cnt = 0;
    for(auto c : s) {
        if(prev == c) {
            cnt++;
        } else {
            max_cnt = max(max_cnt,cnt);
            cnt = 0;
        }
        prev = c;
    }
    cout << max(max_cnt,cnt)  + 1 <<endl;
}