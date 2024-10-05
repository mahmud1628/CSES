#include<bits/stdc++.h>
using namespace std;


// check all the possible combinations of the apples and return the minimum difference between the two groups
long long solve(vector<long long> &a,int index,long long sum1,long long sum2) {
    if(index == a.size()) {
        return abs(sum1-sum2);
    }
    return min(solve(a,index+1,sum1+a[index],sum2),solve(a,index+1,sum1,sum2+a[index]));
}

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(auto &i : a) {
        cin >> i;
    }
    long long sum1 = 0,sum2 =0;
    int index = 0;
    cout << solve(a,index,sum1,sum2) << endl;
}