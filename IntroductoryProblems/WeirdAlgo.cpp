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
    cout<<n<<" ";
    while(n!=1){
        if(n&1){
            n = 3*n + 1;
            cout<<n<<" ";
        }
        else{
            n = n/2;
            cout<<n<<" ";
        }
    }

    return 0;
}