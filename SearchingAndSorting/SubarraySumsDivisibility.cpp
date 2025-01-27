#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{
    ll n;
    cin>>n;
    vll arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    map<ll,ll>mpp;
    mpp[0]++;
    ll cnt = 0;
    ll sum_remainder = 0;
    for(int i = 0;i<n;i++){
        sum_remainder = (sum_remainder%n + arr[i]%n + n)%n;
        if(mpp.find(sum_remainder)!=mpp.end()){
            cnt+=mpp[sum_remainder];
        }
        mpp[sum_remainder]++;
    }
    cout<<cnt<<'\n';
    return 0;
}