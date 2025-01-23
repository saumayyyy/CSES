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
    stack<int>st;
    vi ans(n);
    for(int i = 0;i<n;i++){
        int curr_val = arr[i];
        while(!st.empty() && arr[st.top()-1]>=curr_val)st.pop();
        if(st.empty()){
            ans[i] = 0;
            st.push(i+1);
        }else{
            ans[i] = st.top();
            st.push(i+1);
        }

    }
    for(int i = 0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
/*
8
2 5 1 4 8 3 2 5
stack->1
0 1 0 3 4 3

if > curr =>push
if < curr =>pop until greater=>push
*/