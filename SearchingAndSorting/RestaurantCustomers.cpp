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
    vi arrival(n);
    vi deraprture(n);

    for(int i = 0;i<n;i++){
        cin>>arrival[i]>>deraprture[i];
    }

    sort(arrival.begin(),arrival.end());
    sort(deraprture.begin(),deraprture.end());
    int i = 0,j = 0;
    int ans = 0,cnt = 0;
    while(i<n && j<n){
        if(arrival[i]<deraprture[j]){
            cnt++;
            ans = max(ans,cnt);
            i++;
        }
        else{
            cnt--;
            j++;
        }
    }
    cout<<ans<<endl;


    return 0;
}