#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;


int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    //n->applicants
    //m->apartments
    vector<ll>desired(n);
    vector<ll>apart_size(m);
    for(int i = 0;i<n;i++){
        cin>>desired[i];
    }
    for(int i = 0;i<m;i++){
        cin>>apart_size[i];
    }
    sort(apart_size.begin(),apart_size.end());
    sort(desired.begin(),desired.end());
    int cnt = 0;
    int i = 0,j = 0;
    while(i<n && j<m){
        if(desired[i] + k < apart_size[j]){
            i++;
        }
        else if(desired[i] - k > apart_size[j]){
            j++;
        }
        else{
            cnt++;
            i++;
            j++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}