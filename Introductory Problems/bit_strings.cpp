#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll mod = 1e9 + 7;

ll recursive_power(ll number, ll n) {
    if(n==0) {
        return 1;
    } else if(n % 2) {
        long long temp = recursive_power(number,(n-1)/2) % mod;
        return (number * temp * temp) % mod;
    } else {
        long long temp = recursive_power(number,(n/2)) % mod;
        return (temp * temp) % mod;
    }
}

ll power(ll number,ll n) {
    ll ans = 1;
    while(n) {
        if(n & 1LL) {
            ans = (ans * number) % mod;
        }
        number = (number * number) % mod;
        n >>= 1LL;
    }
    return ans;
}

int main() {
    long long n;
    cin>>n;
    cout << recursive_power(2,n) <<endl;
    return 0;
}