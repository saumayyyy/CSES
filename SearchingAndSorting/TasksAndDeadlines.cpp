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
    vector<vll>arr(n,vll(2));
    for(int i = 0;i<n;i++){
        int a,d;
        cin>>a>>d;
        arr[i] = {a,d};
    }
    sort(arr.begin(),arr.end());
    ll time = 0;
    ll profit = 0;
    for(int i = 0;i<n;i++){
        ll dur = arr[i][0];
        ll ddl = arr[i][1];
        time += dur;
        profit += (ddl - time);
    }

    cout<<profit<<"\n";
    return 0;
}
/*
timeline ->(0,5)(5,11)(11,19)
6 10 =>1 ->-1
8 15 =>2 ->-4
5 12 =>3 ->+7
*/