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
    for(ll i = 1;i<=n;i++){
        if(i==1){
            cout<<0<<endl;
            continue;
        }
        ll numTotalWays = (i*i) * ((i*i) - 1) / 2;
        ll numAttackingWays = 4*(i-1)*(i-2);
        ll ans = numTotalWays - numAttackingWays;
        cout<<ans<<endl;
    }
    return 0;
}