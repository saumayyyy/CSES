#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

void solve(string &st,vector<int>vis,set<string>& ans,string curr,int n){
    if(curr.length() == n){
        ans.insert(curr);
        return;
    }
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            curr += st[i];
            vis[i] = 1;
            solve(st,vis,ans,curr,n);
            curr.pop_back();
            vis[i] = 0;
        }
    }
}

int main()
{
    string st;
    cin>>st;
    int n = st.length();
    set<string>ans;
    vector<int>vis(n,0);
    solve(st,vis,ans,"",n);
    cout<<ans.size()<<endl;
    for(auto it : ans){
        cout<<it<<endl;
    }
    return 0;
}