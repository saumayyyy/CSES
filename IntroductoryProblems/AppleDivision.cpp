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
    vector<int>arr(n);
    ll sum = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    ll target = sum/2;
    ll ans = 0;
    for(int i = 0;i<(1<<n);i++){
        ll currentSum = 0;
        for(int j = 0;j<n;j++){
            if((1<<j)&i)currentSum+=arr[j];
        }
        if(currentSum<=target){
            ans = max(ans,currentSum);
        }
    }
    cout<<(sum-2*ans)<<endl;
    return 0;
}