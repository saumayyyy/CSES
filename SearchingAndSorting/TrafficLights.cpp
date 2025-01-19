#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int main()
{
    int x,n;
    cin>>x>>n;
    vi pos(n);
    for(int i = 0;i<n;i++){
        cin>>pos[i];
    }
    set<int>st;
    map<int,int>mpp;
    st.insert(0);
    st.insert(x);
    for(int i = 0;i<n;i++){
        int curr_pos = pos[i];
        auto it = st.lower_bound(curr_pos);
        int upper = *(it);
        it--;
        int lower = (*it);
        st.insert(curr_pos);
        if(mpp.find(upper-lower)!=mpp.end())mpp[upper-lower]--;
        if(!mpp[upper-lower])mpp.erase(upper-lower);
        mpp[curr_pos-lower]++;
        mpp[upper-curr_pos]++;
        auto maxi = mpp.end();
        maxi--;
        int ans = (*(maxi)).first;
        cout<<ans<<" ";
    }
    return 0;
}

/*
*/