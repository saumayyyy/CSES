#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        if(x>y){
            //reach x,x first
            ll num = x*x - (x-1);
            ll ans;
            if(x&1){
                ans = num - (x-y);
            }
            else{
                ans = num + (x-y);
            }
            cout<<ans<<endl;
        }
        else{
            //reach y,y first
            ll num = y*y - (y-1);
            ll ans;
            if(y&1){
                ans = num + (y-x);
            }
            else{
                ans = num - (y-x);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}

/*
1,1 => 1
2,2 => 3
3,3 => 7
4,4 => 13
5,5 => 21
n,n => n*n - (n-1)
n->even => up -, left +
n->odd => up +, left -
3,5
*/