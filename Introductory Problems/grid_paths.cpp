#include<bits/stdc++.h>
using namespace std;

int dr[] = {-1,0,1,0}; // row up, right, down, left
int dc[] = {0,1,0,-1}; // column up, right, down, left
int p[48];
bool onPath[9][9];

int solve(int index,int row,int col) {
    if(onPath[row][col-1] && onPath[row][col+1] && !onPath[row-1][col] && !onPath[row+1][col]) return 0;
    if(onPath[row-1][col] && onPath[row+1][col] && !onPath[row][col-1] && !onPath[row][col+1]) return 0;
    if(row == 7 && col == 1) { // reached endpoint
        if(index == 48) { // finished line
            return 1;
        }
        return 0; // line not finished
    }
    if(index == 48) { // finished line but not in endpoint
        return 0;
    }
    int return_ans = 0;
    onPath[row][col] = true;

    if(p[index] < 4) {
        int next_row = row + dr[p[index]];
        int next_col = col + dc[p[index]];
        if(!onPath[next_row][next_col]) {
            return_ans += solve(index+1,next_row,next_col);
        }
    } else {
        for(int i=0;i<4;i++) {
            int next_row = row + dr[i];
            int next_col = col + dc[i];
            if(!onPath[next_row][next_col]) {
                return_ans += solve(index+1,next_row,next_col);
            }
        }
    }
    onPath[row][col] = false;
    return return_ans;
}

int main() {
    string line;
    getline(cin,line);

    for(int i=0;i<48;i++) {
        switch(line[i]) {
            case 'U': p[i] = 0; break;
            case 'R': p[i] = 1; break;
            case 'D': p[i] = 2; break;
            case 'L': p[i] = 3; break;
            default: p[i] = 4; break;
        }
    }
    for(int i =0;i<9;i++) {
        onPath[0][i] = onPath[8][i] = onPath[i][0] = onPath[i][8] = true;
    }
    for(int i=1;i<=7;i++) {
        for(int j=1;j<=7;j++) {
            onPath[i][j] = false;
        }
    }
    int start_index = 0;
    int start_row = 1;
    int start_col = 1;
    int ans = solve(start_index,start_row,start_col);
    cout << ans << endl;
}

// solution video : USACO Guide