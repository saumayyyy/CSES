#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const int MOD = 1e9+7;

ll findPower(ll n){
    ll res = 1;
    ll base = 2;
    while(n>0){
        if(n&1){
            res= (res*base)%MOD;
            n--;
        }
        else{
            n /= 2;
            base = (base*base)%MOD;
        }
    }
    return res%MOD;
}

int main()
{
    ll n;
    cin>>n;
    cout<<findPower(n)<<endl;
    return 0;
}