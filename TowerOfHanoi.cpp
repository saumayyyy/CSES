#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int countMoves(int disks,int from,int aux,int to,vector<pii>& arr){
    if(disks == 1){
        arr.push_back({from,to});
        return 1;
    }
    int moves = 0;
    moves += countMoves(disks-1,from,to,aux,arr);
    moves++;
    arr.push_back({from,to});
    moves+= countMoves(disks-1,aux,from,to,arr);
    return moves;
}

int main()
{
    int n;
    cin>>n;
    vector<pii>arr;
    int moves = countMoves(n,1,2,3,arr);
    cout<<moves<<endl;
    for(auto it : arr){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
/*
n = 2 , moves = 3
          -
         ---
 1   2   3
 move 1 disk from left to middle
 move 1 disk from left to right
 move 1 disk from middle to right

 n = 3
  -
 ---     
-----       
  1    2    3
move n-1 disks from left to middle
move 1 disk from left to right
move n-1 disk from middle to right

*/