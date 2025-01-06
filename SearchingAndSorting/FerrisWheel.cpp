#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{
    ll n,x;
    cin>>n>>x;
    vll weights(n);
    for(int i = 0;i<n;i++){
        cin>>weights[i];
    }
    sort(weights.begin(),weights.end());
    int i = 0,j = n-1;
    int cnt = 0;
    while(i<=j){
        if(i==j){
            cnt++;
            break;
        }
        if(weights[i]+weights[j] > x){
            cnt++;
            j--;
        }
        else{
            cnt++;
            i++;
            j--;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

/*



*/