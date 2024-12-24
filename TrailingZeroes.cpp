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
    ll cnt = 0;
    for(ll i = 5;i<=n;i*=5){
        cnt += (n/i);
    }
    cout<<cnt<<endl;
    return 0;
}