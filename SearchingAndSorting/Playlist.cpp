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
    vi songs(n);
    for(int i = 0;i<n;i++){
        cin>>songs[i];   
    }
    map<int,int>mpp;
    int l = 0,r = 0;
    int max_cnt = 0;
    while(r<n){
        mpp[songs[r]]++;
        max_cnt = max((int)mpp.size(),max_cnt);
        if(r-l+1 > mpp.size()){
            mpp[songs[l]]--;
            if(mpp[songs[l]]==0)mpp.erase(songs[l]);
            l++;
        }
        r++;
    }
    cout<<max_cnt<<"\n";
    return 0;
}