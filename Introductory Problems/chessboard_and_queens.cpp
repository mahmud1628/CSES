#include<bits/stdc++.h>
using namespace std;

void solve(vector<string> & board, int & ans,int row,vector<bool> & occupiedColumn, vector<bool> & occupiedPrimaryDiagonal,vector<bool> & occupiedSecondaryDiagonal) {
    if(row == 8) {
        ans++;
        return;
    }
    for(int column = 0;column<8;column++) {
        if(board[row][column]=='*' || occupiedColumn[column] || occupiedPrimaryDiagonal[row+column] || occupiedSecondaryDiagonal[row-column+8]) {
            continue;
        }
        occupiedColumn[column] = occupiedPrimaryDiagonal[row+column] = occupiedSecondaryDiagonal[row - column + 8] = true;
        solve(board,ans,row+1,occupiedColumn,occupiedPrimaryDiagonal,occupiedSecondaryDiagonal);
        occupiedColumn[column] = occupiedPrimaryDiagonal[row+column] = occupiedSecondaryDiagonal[row - column + 8] = false;
    }
}

int main() {
    vector<string> board(8);
    for(auto &a: board) cin>>a;
    vector<bool> occupiedColumn(8, false);
    vector<bool> occupiedPrimaryDiagonal(15, false);
    vector<bool> occupiedSecondaryDiagonal(15, false);
    int ans = 0;
    solve(board,ans,0,occupiedColumn,occupiedPrimaryDiagonal,occupiedSecondaryDiagonal);
    cout << ans <<endl;
}