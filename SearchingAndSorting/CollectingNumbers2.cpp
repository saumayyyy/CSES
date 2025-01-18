#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{
    int n,m;
    cin>>n>>m;
    vi arr(n+1);
    vector<vector<int>>queries(m,vector<int>(2));
    vi pos(n+1);
    for(int i = 1;i<=n;i++){
        cin>>arr[i];
        pos[arr[i]] = i;
    }

    for(int i = 0;i<m;i++){
        int a,b;
        cin>>a>>b;
        queries[i] = {a,b};
    }

    int curr_cnt = 1;
    for(int i = 2;i<=n;i++){
        if(pos[i] < pos[i-1])curr_cnt++;
    }
    for(auto it : queries){
        set<int>affected;
        affected.insert(arr[it[0]]);
        affected.insert(arr[it[1]]);
        if(arr[it[0]] > 1) affected.insert(arr[it[0]]-1);
        if(arr[it[0]] < n) affected.insert(arr[it[0]]+1);
        if(arr[it[1]] > 1) affected.insert(arr[it[1]]-1);
        if(arr[it[1]] < n) affected.insert(arr[it[1]]+1);
        for(auto num : affected){
            if(num>1 && pos[num] < pos[num-1])curr_cnt--;
        }
        swap(arr[it[0]],arr[it[1]]);
        pos[arr[it[0]]] = it[0];
        pos[arr[it[1]]] = it[1];
        for(auto num : affected){
            if(num>1 && pos[num] < pos[num-1])curr_cnt++;
        }
        cout<<curr_cnt<<"\n";
    }
    return 0;
}
