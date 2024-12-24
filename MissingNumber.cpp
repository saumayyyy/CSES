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
    int xorVal = 0;
    for(int i = 0;i<n-1;i++){
        int a;
        cin>>a;
        xorVal ^= a;
        xorVal ^= (i+1);
    }
    xorVal^=n;
    cout<<xorVal<<endl;
    return 0;
}