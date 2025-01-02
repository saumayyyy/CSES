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
        ll a,b;
        cin>>a>>b;

        if(a<b)swap(a,b);
        if(a>2*b){
            cout<<"NO"<<endl;
        }
        else{
            if((a+b)%3==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}
/*
a = 6, b = 3
*/