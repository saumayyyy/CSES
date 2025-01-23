#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

ll numSubarrays(vi& arr,int n,int k){
    int l = 0,r = 0,cnt = 0;
    ll sum = 0;
    while(r<n){
        sum+=arr[r];
        while(sum > k){
            sum-=arr[l];
            l++;
        }
        if(sum<=k)cnt += (r-l+1);
        r++;
    }
    return cnt;
}

int main()
{
    int n,x;
    cin>>n>>x;
    vi arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<< numSubarrays(arr,n,x) - numSubarrays(arr,n,x-1);
    return 0;
}