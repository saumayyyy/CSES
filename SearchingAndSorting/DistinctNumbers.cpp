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
    set<int>st;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        st.insert(a);
    }
    cout<<st.size()<<endl;

    return 0;
}