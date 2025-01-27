#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{
    int n,k;
    cin>>n>>k;
    vll arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    map<ll,ll>mpp;
    ll l = 0,r = 0,cnt = 0;
    while(r<n){
        mpp[arr[r]]++;
        while(mpp.size()>k){
            mpp[arr[l]]--;
            if(mpp[arr[l]]==0)mpp.erase(arr[l]);
            l++;
        }
        cnt+=(r-l+1);
        r++;

    }
    cout<<cnt<<"\n";
    return 0;
}