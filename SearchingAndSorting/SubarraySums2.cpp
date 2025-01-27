#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{
    ll n,x;
    cin>>n>>x;
    vll arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    map<ll,ll>mpp;
    mpp[0]++;
    ll sum = 0;
    ll cnt = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
        ll remaining = sum - x;
        if(mpp.find(remaining)!=mpp.end()){
            cnt+=mpp[remaining];
        }
        mpp[sum]++;
    }
    cout<<cnt<<'\n';
    return 0;
}