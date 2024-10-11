#include<bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int origin,int destination,int buffer,int n,vector<pair<int,int>> & moves) {
    if(n == 0) {
        return;
    }
    tower_of_hanoi(origin,buffer,destination,n-1,moves);
    moves.push_back({origin,destination});
    tower_of_hanoi(buffer,destination,origin,n-1,moves);
}

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> moves;
    tower_of_hanoi(1,3,2,n,moves);
    cout << moves.size() <<endl;
    for(auto a : moves) {
        cout << a.first << " " << a.second << endl;
    }
}