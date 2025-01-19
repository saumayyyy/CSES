#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

void solve(int index, vi& arr,int k){
    if(arr.size()==1){
        cout<<arr[0];
        return;
    }
    int target = (index+k)%arr.size();
    cout<<arr[target]<<" ";
    arr.erase(arr.begin() + target);
    solve((target)%arr.size(),arr,k);
}

int main()
{
    int n;
    cin>>n;
    vi arr;
    int k = 1;
    if(n&1){
        for(int i = 2;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i = 1;i<=n;i+=2){
            arr.push_back(i);
        }
        solve(arr.size()-1,arr,k);
    }
    else{
        for(int i = 2;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i = 1;i<=n;i+=2){
            arr.push_back(i);
        }
        solve(0,arr,k);
    }
    return 0;
}

/*
n = 7

2  4  6  1  5  3  7
|  0 |  1 | 1  |  0 |  1 | 1  |  0 |
  1     2   3     4    5    6    7 
*/