#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{
    int n;
    cin>>n;
    ll coins[n];
    ll sum = 0;
    for(int i = 0;i<n;i++){
        cin>>coins[i];
        sum+=coins[i];
    }
    sort(coins,coins+n);
    ll preSum[n];
    preSum[0] = coins[0];
    if(coins[0]!=1){
        cout<<1<<endl;
        return 0;
    }
    for(int i = 1;i<n;i++){
        if(preSum[i-1]+1 < coins[i]){
            cout<<preSum[i-1]+1<<endl;
            return 0;
        }
        else{
            preSum[i] = preSum[i-1]+coins[i];
        }
    }
    cout<<sum+1<<endl;

    return 0;
}

/*
1 2 2 7 9



 */