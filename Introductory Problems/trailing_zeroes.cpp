#include <bits/stdc++.h>
using namespace std;

int trailing_zeros(int n) {
    int count = 0;
    for(int i=5; n/i >= 1; i *= 5) {
        count += n/i;
    }
    return count;
}

int trailing_zeros2(int n) {
    int count = 0;
    while(n) {
        n /= 5;
        count += n;
    }
    return count;
}

int trailing_zeors3(int n) {
    return n == 0 ? 0 : n/5 + trailing_zeors3(n/5);
}

int main() {
    int n;
    cin >> n;
    cout << trailing_zeros(n) <<endl;
    return 0;
}