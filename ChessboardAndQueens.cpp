#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

bool isSafe(int row,int col,vector<vector<char>>& board,vi& rowNumForQueen){
    if(rowNumForQueen[col]!=-1)return false;
    else{
        int rpc = row + col;
        int rmc = row - col;
        for(int i = 0;i<8;i++){
            if(rowNumForQueen[i]==row)return false;
            if(rowNumForQueen[i]!=-1 && rowNumForQueen[i]+i == rpc)return false;
            if(rowNumForQueen[i]!=-1 && rowNumForQueen[i]-i == rmc)return false;
        }
        return true;
    }
}

int countWays(int n,int col,vector<vector<char>>& board,vi& rowNumForQueen){
    if(n==8){
        return 1;
    }
    if(col==8)return 0;
    int ways = 0;
    for(int row = 0;row<8;row++){
        if(isSafe(row,col,board,rowNumForQueen) && board[row][col]!='*'){
            rowNumForQueen[col] = row;
            ways += countWays(n+1,col+1,board,rowNumForQueen);
            rowNumForQueen[col] = -1;
        }
    }
    return ways;
}


int main()
{
    vector<vector<char>>board(8,vector<char>(8,'.'));
    for(int i = 0;i<8;i++){
        for(int j = 0;j<8;j++){
            cin>>board[i][j];
        }
    }
    vi rowNumForQueen(8,-1);
    int count = countWays(0,0,board,rowNumForQueen);
    cout<<count<<endl;
    return 0;
}