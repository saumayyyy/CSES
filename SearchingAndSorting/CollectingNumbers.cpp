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
    vi arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    set<int>st;
    for(int i = 0;i<n;i++){
        int val = arr[i];
        if(st.find(val-1)==st.end()){
            st.insert(val);
        }
        else{
            st.erase(val-1);
            st.insert(val);
        }
    }
    cout<<st.size()<<endl;
    return 0;
}