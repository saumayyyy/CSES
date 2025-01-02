#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{
    int n;
    cin>>n;
    int prev;
    cin>>prev;
    ll ans = 0;
    for(int i = 1;i<n;i++){
        int curr;
        cin>>curr;
        if(curr<prev){
            ans += prev-curr;
        }else{
            prev = curr;
        }
    }
    cout<<ans<<endl;
    return 0;
}