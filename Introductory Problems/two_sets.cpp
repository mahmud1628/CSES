#include<iostream>
#include<vector>
using namespace std;

int main() {
    long long int  n;
    cin>>n;
    long long int sum = n*(n+1)/2;
    if(sum % 2) {
        cout << "NO" << endl;
    } else {
        vector<int> a,b;
        sum = sum/2;
        for(int i=n;i>0;i--) {
            if(sum >= i) {
                sum = sum - i;
                a.push_back(i);
            } else {
                b.push_back(i);
            }
        }
        cout << "YES" <<endl;
        cout << a.size() << endl;
        for(auto m : a) {
            cout << m << " " ;
        }
        cout << "\n" << b.size() <<endl;
        for(auto m : b) {
            cout << m << " ";
        }
        cout << "\n";
    }
}