#include<bits/stdc++.h>
using namespace std;

int main() {
    long long q;
    cin>>q;
    while(q--) {
        long long k;
        cin>>k;
        long long n = 1;
        long long d = 1;
        long long s = 9;
        while(k > s) {
            k -= s;
            n++;
            d *= 10;
            s = 9 * n * d;
        }
        long long num = d + (k - 1) / n;
        long long pos = (k - 1) % n;
        cout << to_string(num)[pos] <<endl;
    }
}