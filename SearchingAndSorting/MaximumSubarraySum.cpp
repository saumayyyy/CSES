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
    ll sum = 0;
    ll maxSum = INT_MIN;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
        maxSum = max(sum,maxSum);
        if(sum<0)sum = 0;
    }
    cout<<maxSum<<endl;
    return 0;
}