#include<iostream>
using namespace std;

int main() {
    long long n;
    cin>>n;
    for(long long k=1;k<=n;k++) {
        long long no_ways_to_place_both = (long long)(k*k*(k*k-1)/2);
        long long no_2by3_box = (long long)(k-1)*(k-2);
        long long no_3by2_box = no_2by3_box;
        long long attacking_ways = 2*(no_2by3_box+no_3by2_box);
        cout << no_ways_to_place_both - attacking_ways << endl;
    }
}