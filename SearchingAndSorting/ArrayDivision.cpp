#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{
    ll n,k;
    cin>>n>>k;
    vll arr(n);
    ll arr_sum = 0;
    ll maxi = INT_MIN;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        arr_sum+=arr[i];
        maxi = max(arr[i],maxi);
    }
    ll s = maxi,e = arr_sum;
    ll sum_min = 0;
    while(s<=e){
        ll mid_sum = s+(e-s)/2;
        ll cnt = 1;
        ll sum = 0;
        for(int i = 0;i<n;i++){
            sum += arr[i];
            if(sum>mid_sum){
                cnt++;
                sum = arr[i];
            }
        }
        if(cnt>k){
            s = mid_sum+1;
        }
        else{
            sum_min = mid_sum;
            e = mid_sum-1;
        }
    }
    cout<<sum_min<<"\n";
    return 0;
}