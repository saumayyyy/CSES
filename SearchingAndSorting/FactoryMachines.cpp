#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

bool isPossible(ll maxTime, vll& time,ll t){
    ll products = 0;
    for(int i = 0;i<time.size();i++){
        products += (maxTime / time[i]);
    }
    return products >= t;
}

int main()
{
    int n,t;
    cin>>n>>t;
    vll time(n);
    ll mini = INT_MAX;
    for(int i = 0;i<n;i++){
        cin>>time[i];
        mini = min(mini,time[i]);
    }
    ll s = 0, e = mini * t;
    ll ans = e;
    while(s<=e){
        ll mid = s + (e-s)/2;
        if(isPossible(mid,time,t)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}