#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{
    int n,x;
    cin>>n>>x;
    vi arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,vector<vector<int>>>mpp;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            int sum = arr[i] + arr[j];
            mpp[sum].push_back({i,j});
        }
    }

    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            int curr_sum = arr[i] + arr[j];
            int req_sum = x - curr_sum;
            if(mpp.find(req_sum)!=mpp.end()){
                for(auto it : mpp[req_sum]){
                    ///it->vectors of size 2
                    if(i!=it[0] && j!=it[0] && i!=it[1] && j!=it[1]){
                        cout<<i+1<<" "<<j+1<<" "<<it[0]+1<<" "<<it[1]+1;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"IMPOSSIBLE"<<"\n";
    return 0;
}