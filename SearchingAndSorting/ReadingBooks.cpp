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
    vll time(n);
    ll sum = 0;
    for(int i = 0;i<n;i++){
        cin>>time[i];
        sum += time[i];
    }
    sort(time.begin(),time.end());
    cout<<max(2*time[n-1],sum)<<'\n';
    return 0;
}
/*
2 7 8 3 4
2 3 4 7 8
8 7

*/