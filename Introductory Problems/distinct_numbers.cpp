#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    set<long long> s;
    while(n--) {
        long long x;
        cin>>x;
        s.insert(x);
    }
    cout << s.size() <<endl;
}